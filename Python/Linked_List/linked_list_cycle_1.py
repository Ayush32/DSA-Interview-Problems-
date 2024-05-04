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

    def cycle(self):
        # s = set()
        # temp = self.head

        # while temp != None:
        #     if temp in s:
        #         return True
        #     s.add(temp)

        #     temp = temp.next
        slow = self.head
        fast = self.head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                return True
        return False


llist  = LinkedList()
llist.push(20)
llist.push(4)
llist.push(15)
llist.push(10)

# create loop
llist.head.next.next.next.next = llist.head

if llist.cycle() == True:
    print("Loop Found")
else:
    print("Loop Not Found")