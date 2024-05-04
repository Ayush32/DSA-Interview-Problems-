class Node:

    def __init__(self,x):
        self.data = x
        self.next = None

class LinkedList:

    def __init__(self):
        self.head = None

    def push(self,data):

        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode

    def printList(self):
        temp = self.head

        while temp:
            if temp != None:
                print(temp.data, end = " ")
            temp = temp.next

    def deleteBeginning(self):
        if self.head == None:
            return None
        temp = self.head
        temp = temp.next
        self.head = temp

        return self.head
    
    def deleteEnd(self):
        temp = self.head

        if self.head.next == None:
            self.head = None
            return self.head
        while temp.next.next != None:
            temp = temp.next

        temp.next = None

        return self.head
        
    def deleteMiddle(self,pos):
        temp = self.head
        index = 1
        prev = None
        while temp.next != None and index < pos:
            prev = temp
            temp = temp.next
            index = index + 1

        if index <  pos:
            print("Index is out of range")
        elif index == 0:
            self.head = self.head.next
        else:
            prev.next = temp.next

        return self.head



llist  = LinkedList()
llist.push(30)
llist.push(20)
llist.push(4)
llist.push(15)
llist.push(10)
llist.deleteBeginning()
llist.deleteEnd()
llist.deleteMiddle()
print(llist.printList())

