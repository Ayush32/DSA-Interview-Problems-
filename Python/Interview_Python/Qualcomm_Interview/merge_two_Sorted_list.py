class Node:
    
    def __init__(self,x):
        self.data = x
        self.next = None
        
class Linkedlist:
    def __init__(self):
        self.head = None
    
    def push(self,data):
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode
        
    
    def mergeTwoLinkedList(self,l1,l2):
        list1 = l1.head
        list2 = l2.head
        
        mergeList = Node(-1)
        temp = mergeList
        while list1 and list2:
            if list1.data < list2.data:
                temp.next = list1
                list1 = list1.next
            else:
                temp.next = list2
                list2 = list2.next
            
            temp = temp.next
            
            if list1:
                temp.next = list1
            if list2:
                temp.next = list2
            
            
        return mergeList.next

    def printList(self,mergeResult):
        temp = mergeResult
        while temp is not None:
            print(temp.data, "->", end = " ")
            temp = temp.next
        print("NULL")
            

list1 = Linkedlist()
list1.push(5)
list1.push(3)
list1.push(1)

list2 = Linkedlist()
list2.push(7)
list2.push(4)
list2.push(2)

obj = Linkedlist()
obj.printList(list1)
obj.printList(list2)
mergeResult = obj.mergeTwoLinkedList(list1, list2)
obj.printList(mergeResult)
        