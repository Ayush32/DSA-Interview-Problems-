class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp = head
        count = 0
        while temp != None:
            count = count + 1
            temp = temp.next
        
        length = count // 2
        temp = head
        
        while length != 0:
            length = length - 1
            temp = temp.next
        
        return temp;
        # O(n)

        slow = head
        fast = head

        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next
        
        return slow

