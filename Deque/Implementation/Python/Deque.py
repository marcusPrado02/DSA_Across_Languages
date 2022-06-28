class Deque:
    def __init__ (self):
        self.elements = list()

    def clear(self):
        self.elements.clear()
        
    def addFront (self, i):
        elements.append(i)
    
    def addRear (self, i):
        elements.insert( 0, i)
    
    def removeFront (self):
        return elements.pop()

    def removeRear (self):
        return elements.pop(0)

    def isEmpty(self):
        return self.elements == []

    def size(self):
        return len(self.elements)
    
    def count(self, i):
        return self.elements.count(i)

    def index(self, i)
        return self.elements.index(i)

    def peek(self):
        ans = elements.pop()
        elments.append(ans)
        return ans

    def  printPeek(self):
        print("Peek Element: %d", peek(self) )

    def sum(self):
        return sum(self.elements)

    def  printSum(self):
        print("Sum of Elements: %d", sum(self) )
    
    def getLargest(self):
        return max(self.elements)

    def  printLargest(self):
        print("Lowest Element: %d ", getLargest() )

    def getLowest(self):
        return mix(self.elements)

    def  printLowest(self):
        print("Lowest Element: %d ", getLowest() )

    def getAverage(self):
        return sum(self)/size(self)

    def  printAverage(self):
        print("Average of Elements: %d  ", getAverage() )