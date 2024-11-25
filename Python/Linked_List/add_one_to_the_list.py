# class Node:
#     def __init__(self, data=0, next=None):
#         self.data = data
#         self.next = next


# Don't change the code above.
def reverse(head):
    prev = None
    nextNode = None
    curr = head
    while curr != None:
        nextNode = curr.next
        curr.next = prev
        prev = curr
        curr = nextNode
        
    head  = prev
    return head

def addOne(head: Node) -> Node:
    # write your code here
    reverseList = reverse(head)
    carry = 1
    curr = reverseList
    temp = None
        
    while curr != None and carry:
        value = curr.data
        value = carry + value
        carry = value // 10
        value = value % 10
        curr.data = value
        temp = curr
        curr = curr.next
        
    if carry != 0:
        temp.next = Node(carry)
        
    return reverse(reverseList)

# print(12 % 10)