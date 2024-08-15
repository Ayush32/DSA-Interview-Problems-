'''
curr
1 -> 2 -> 3 -> 4 -> 5
↓
5 -> 4 -> 3 -> 2 -> 1
'''


def reverse_linkedlist(head):
    curr = head
    next = None
    prev = None
    
    while curr is not None:
        next = curr.next
        curr.next = prev
        prev = curr
        curr = next
        
    head = prev
    return head