class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        currNode = head
        dummyList = ListNode(-1)
        temp = dummyList

        while currNode:
            if currNode.val != val:
                newNode = ListNode(currNode.val)
                temp.next = newNode
                temp = temp.next
            
            currNode = currNode.next
        return dummyList.next

class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        currNode = head
        while currNode:

            if currNode.next and currNode.next.val == val:
                currNode.next = currNode.next.next
            else:
                currNode = currNode.next
        
        if head and head.val == val:
            return head.next

        return head