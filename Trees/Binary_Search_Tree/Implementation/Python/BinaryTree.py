class BinaryTree:
    def __init__(self, root):
        self.key = root
        self.left = None
        self.right = None

    def insertLeft(self, newNode):
        if self.left == None:
            self.left = BinaryTree(newNode)
        else:
            t = BinaryTree(newNode)
            t.left = self.left
            self.left = t
    
    def insertRight(self, newNode):
        if self.right == None:
            self.right = BinaryTree(newNode)
        else:
            t = BinaryTree(newNode)
            t.right = self.right
            self.right = t
    
    def getRight(self):
        return self.right
    
    def getLeft(self):
        return self.left

    def setRootValue(self, obj):
        self.key = obj

    def getRootValue(self):
        return self.key

    def preOrder(self):
        print(self.key)

        if self.left:
            self.left.preOrder()
        if self.right:
            self.reight

