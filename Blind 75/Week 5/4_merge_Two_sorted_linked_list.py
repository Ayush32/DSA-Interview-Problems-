# Input: a: 5->10->15,  b: 2->3->20
# Output: 2->3->5->10->15->20

# Input: a: 1->1, b: 2->4
# Output: 1->1->2->4

class ListNode:
    
    def __init__(self,val):
        self.next = None
        self.val = val
        


def mergeTwoSortedList(list1,list2):
    new_list = ListNode(-1)
    l1 = list1
    l2 = list2
    temp = new_list
    while l1 and l2:
        if l1.val < l2.val:
            new_Node = ListNode(l1.val)
            temp.next = new_Node
            l1 = l1.next
        else:
            new_Node = ListNode(l2.val)
            temp.next = new_Node
            l2 = l2.next
        temp = temp.next
    
    if l1 is not None:
        temp.next = l1
        temp = temp.next
    
    if l2 is not None:
        temp.next = l2
        temp = temp.next
    
    return new_list.next


# Create a hard-coded linked list:
a = ListNode(2)
a.next = ListNode(4)
a.next.next = ListNode(8)
a.next.next.next = ListNode(9)

b = ListNode(1)
b.next = ListNode(3)
b.next.next = ListNode(8)
b.next.next.next = ListNode(10)

merge_list = mergeTwoSortedList(a,b)
temp = merge_list
while temp:
    print(temp.val, end=" ")
    temp = temp.next
