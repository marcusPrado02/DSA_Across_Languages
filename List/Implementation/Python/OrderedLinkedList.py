from Node import Node

class OrderedLinkedList:
    def __init__(self) -> None:
        self.head = None

    def isEmpty(self):
        return self.head == None

    def size(self):
        current = self.head
        count = 0
        while current != None:
            count += 1
            current = current.getNext()

        return count

    def search(self , i):
        current = self.head
        found = False
        stop = False
        while current != None and not found:
            if current.getElement() == i:
                found = True
            else:
                if current.getData() > i:
                    stop = True
                else:
                    current = current.getNext()
        
        return found

    def add(self, i):
        current = self.head
        previous = None
        stop = False
        while current != None and not stop:
            if current.getElement() > i:
                stop = True
            else:
                previous = current
                current = current.getNext()

        temp = Node(i)
        if previous == None:
            temp.setNext(self.head)
            self.head = temp
        else:
            temp.setNext(current)
            previous.setNext(temp)
    
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

    

