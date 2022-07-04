class BinarySearchTree
{
    private TreeNode root;

    public BinarySearchTree()
    {
        root = null;
    }

    public void insert(int x)
    {
        root = insert(x, root);
    }

    private TreeNode insert(int x, TreeNode i)
    {
        if (i == null)
        {
            i = new TreeNode(x);

        }
        else if (x < i.element)
        {
            i.left = insert(x, i.left);

        }
        else if (x > i.element)
        {
            i.right = insert(x, i.right);

        }
        else
        {
            //throw new Exception("Erro ao insert!");
        }

        return i;
    }

    public void remove(int x)
    {
        root = remove(x, root);
    }


    private TreeNode remove(int x, TreeNode i)
    {

        if (i == null)
        {
            //throw new Exception("Erro ao remove!");

        }
        else if (x < i.element)
        {
            i.left = remove(x, i.left);

        }
        else if (x > i.element)
        {
            i.right = remove(x, i.right);


        }
        else if (i.right == null)
        {
            i = i.left;


        }
        else if (i.left == null)
        {
            i = i.right;


        }
        else
        {
            i.left = largestInLeft(i, i.left);
        }

        return i;
    }

    private TreeNode largestInLeft(TreeNode i, TreeNode j)
    {

        if (j.right == null)
        {
            i.element = j.element;
            j = j.left;

        }
        else
        {

            j.right = largestInLeft(i, j.right);
        }
        return j;
    }

    public int getHeight()
    {
        return getHeight(root, 0);
    }



    public int getHeight(TreeNode i, int height)
    {
        if (i == null)
        {
            height--;
        }
        else
        {
            int heightleft = getHeight(i.left, height + 1);
            int heightright = getHeight(i.right, height + 1);
            height = (heightleft > heightright) ? heightleft : heightright;
        }
        return height;
    }


    public int getLargestElement()
    {
        TreeNode node = root;
        for (TreeNode tmp = node; tmp.right != null; tmp = node = tmp.right) ;

        return node.element;
    }
}