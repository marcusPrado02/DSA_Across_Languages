import TreeNode 

class BinarySearchTree:
    def __init__(self, element):
        self.root = TreeNode(element)
        self.left = None
        self.right = None


    def insert(self, x):
        self.root = insertStepTwo(self, x, self.root)

    def insertStepTwo(self, x, i):
        if i == None:
            i = TreeNode(x)
        elif x < i.element:
            i.left = insertStepTwo(self, x, i.left)
        elif x > i.element:
            i.right = insertStepTwo(self, x, i.right)
        #else:
            # throw Exception here 
        return i

    def remove(self, x):
        self.root = removeStepTwo(self, x, self.root)


    def removeStepTwo(self, x, i):
        if i == None:
            # throw Exception here
            print("Error")

        elif x < i.element:
            i.left = removeStepTwo(self, x, i.left)
        
        elif x > i.element:
            i.right = removeStepTwo(self, x, i.right)
        
        elif i.right == None:
            i = i.left  
        
        elif i.left == None:
            i = i.right
        
        else:
            i.left = LasgestInLeft(self, i , i.left)
                
        #else:
            # throw Exception here 
        return i
        


    def LargestInLeft(self, i, j):
        if j.right == None:
            i.element = j.element
            j = j.left

        else:
            j.right = largestInLeft(i , j.right)
        
        return j


    def getHeight(self):
        return getHeightStepTwo(self.root, 0)


    def getHeightStepTwo(i, height):
        if i == None:
            height -= 1
        
        else:
            heightleft = getHeightStepTwo(i.left, height)
            heightright = getHeightStepTwo(i.right, height)
            height = heightleft if (heightleft > heightright) else  heightright

        return height


    def getLargestElement(self):
        tmp = self.root

        while tmp.right != None:
            tmp = tmp.right
        
        return tmp.element


    def preOrder(self):

        print(self.key)
        
        if self.left:
            self.left.preOrder()
        if self.right:
            self.right

