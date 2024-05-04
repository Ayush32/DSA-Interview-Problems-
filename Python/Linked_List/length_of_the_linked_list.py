
class Node:
    # function to initialize the node
    def __init__(self,data):
        self.data = data # assign the data
        self.next = None
    

class LinkedList:
    
    # function to initialize the head
    def __init__(self):
        self.head = None
    
    # 
    def push(self,data):
        # allocate a  node
        newNode =  Node(data)
        # point new node next to head
        newNode.next = self.head
        # make newNode as new Head
        self.head = newNode


    def getLengthList(self):
        # temp = self.head
        # count = 0

        # while temp != None:
        #     count = count + 1
        #     temp = temp.next

            # O(n)
        
        slow = self.head
        fast = self.head

        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next
        
        # return count
        return slow

if __name__ == '__main__':
    llist = LinkedList()
    llist.push(1)
    llist.push(2)
    llist.push(3)
    llist.push(4)
    llist.push(5)

    # if we want to print the variable length
    print("Count of nodes is :", llist.getLengthList())
    # if the function return a node, we have to print that node value
    print("Count of nodes is :", llist.getLengthList().data)






