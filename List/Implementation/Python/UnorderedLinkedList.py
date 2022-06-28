from Node import Node

class UnorderedLinkedList:
    def __init__(self):
        self.head = None

    def isEmpty(self):
        return self.head == None

    def add(self, i):
        temp = Node(i)
        temp.setNext(self.head)
        self.head = temp

    def size(self):
        current = self.head
        count = 0
        while current != None:
            count += 1
            current = current.getNext()

        return count

    def search(self, i):
        current = self.head
        found = False
        while current != None and not found:
            if current.getElement() == i:
                found = True
            else:
                current = current.getNext()
        
        return found

    def remove(self, i):
        current  = self.head
        previous = None
        found = False
        while not found:
            if current.getElement() == i:
                found = True
            else:
                previous = current
                current = current.getNext()
            
        if previous == None:
            self.head = current.getElement()
        else:
            previous.setNext(current.getNext())


    