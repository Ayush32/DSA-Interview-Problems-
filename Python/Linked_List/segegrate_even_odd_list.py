 def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return None
        evenList = head.next
        oddList = head
        even = evenList
        # odd = oddList
        while even and even.next:
            oddList.next = oddList.next.next
            even.next = even.next.next
            

            oddList = oddList.next
            even = even.next

        oddList.next = evenList
        # even.next = None

        return head