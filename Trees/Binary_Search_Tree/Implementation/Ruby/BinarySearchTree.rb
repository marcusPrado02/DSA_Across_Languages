require_relative "TreeNode.rb"

class BinarySearchTree
    attr_accessor  :root;
    
    def initialize
        @root = nil
    end

    
    def insert(x)
        @root = insertStepTwo(x, @root)
    end

    def insertStepTwo(x, i)
        if i == nil
            i = TreeNode.new(x)
        
        elsif x < i.element
            i.left = insertStepTwo(x, i.left)
        
        elsif x > i.element
            i.right = insertStepTwo(x, i.right)
        
        else
            # throw Exception here
        end

        return i
        
    end



    def remove(x)
        @root = removeStepTwo(x, @root)
    end

    def removeStepTwo(x, i)
        if i == nil
            # throw Exception here
        
        elsif x < i.element
            i.left = removeStepTwo(x, i.left)
        
        elsif x > i.element
            i.right = removeStepTwo(x, i.right)
        
        elsif i.right == nil
            i = i.left 
        
        elsif x > i.element
            i = i.right 
        
        else
            i.left = largestInLeft(i, i.left)
        
        end

        return i
        
    end



    def largestInLeft(i, j)
        if(j.right == nil)
            i.element = j.element
            j = j.left
        
        elsif
            j.right = largestInLeft(i, j.right)
        
        end

        return j
        
    end



    def getHeight
        return getHeightStepTwo(@root, 0)
    end



    def getHeightStepTwo(i, height)
        if i == nil
            height -= 1
        else
            heightleft = getHeightStepTwo(i.left, height + 1)
            heightright = getHeightStepTwo(i.right, height + 1)
            height = (heightleft > heightright) ? heightleft : heightright
        end

        return height
    end



    def getLargestElement
        node = @root

        while node.right != nil do
            node = node.right
        end

        return node.element
    end


end

