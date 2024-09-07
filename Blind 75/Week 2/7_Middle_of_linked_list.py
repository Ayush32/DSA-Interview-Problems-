def middle_linked_list(head):
    # n/2 length, loop until we reach n/2 node return middle node
    # two pointer approach 
    slow = head
    fast = head
    
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        
        
    return slow