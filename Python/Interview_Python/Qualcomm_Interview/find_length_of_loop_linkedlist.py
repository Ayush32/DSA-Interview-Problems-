class Node:
    def __init__(self,x):
        self.head = x
        self.next = None
    
class LinkedList:
    
    def __init__(self):
        self.head = None
        
    def push(self,data):
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode
        
    def findLengthOfLoop(self):
        slow = self.head
        fast = self.head
        # entry = head
        length = 1
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            
            if slow == fast:
                slow = slow.next
                while slow != fast:
                    
                    # fast = fast.next
                    slow = slow.next
                    length = length + 1
                return length
        
        return 0


llist  = LinkedList()
llist.push(20)
llist.push(4)
llist.push(15)
llist.push(10)

# create loop
llist.head.next.next.next.next = llist.head

print(llist.findLengthOfLoop())