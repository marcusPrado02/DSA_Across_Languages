class TreeNode {
    public int element { get; set; }
    public TreeNode left { get; set; }
    public TreeNode right { get; set; }

    public TreNode(int element){
        this(element, null, null);
    }

    public TreeNode(int element,TreeNode left,TreeNode right) {
        this.element = element;
        this.left = left;
        this.right = right;
    }
}