def mergeTwoList(list1,list2):
    '''
    T.C - O(n+m)
    S.C - O(N + M)
    '''
    mergeList = ListNode(-1)
    temp = mergeList
    # l1 = list1
    # l2 = list2
    
    while list1 and list2:
        if list1.val < list2.val:
            new_node = ListNode(list1.val)
            temp.next = new_node
            list1 = list1.next
        else:
            new_node = ListNode(list2.val)
            temp.next = new_node
            list2 = list2.next
            
        temp = temp.next
        
    #remaning list
    if list1:
        temp.next = list1
        temp = temp.next
        
    if list2:
        temp.next = list2
        temp = temp.next
    
    return mergeList.next
    
    
  
def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
    
        '''
        T.C - O(n+m)
        S.C - O(1)
        '''
        mergeList = ListNode(-1)
        temp = mergeList
        # l1 = list1
        # l2 = list2
        
        while list1 and list2:
            if list1.val < list2.val:
                
                temp.next = list1
                list1 = list1.next
            else:
                temp.next = list2
                list2 = list2.next
                
            temp = temp.next
            
        #remaning list
        if list1:
            temp.next = list1
            temp = temp.next
            
        if list2:
            temp.next = list2
            temp = temp.next
        
        return mergeList.next
    