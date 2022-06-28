class Node:
    def __init__(self, initelement):
        self.element = initelement
        self.next = None

    def getElement(self):
        return self.element
    
    def getNext(self):
        return self.next

    def setElement(self, newElement):
        self.element = newElement

    def setNext(self, newNext):
        self.next = newNext