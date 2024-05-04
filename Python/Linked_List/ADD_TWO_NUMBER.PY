class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummyList = ListNode(-1)
        sum = 0
        carry = 0
        list1 = l1
        list2 = l2
        temp = dummyList

        while list1 != None or list2 != None or carry:
            sum = 0
            if list1 != None:
                sum = list1.val + sum
                list1 = list1.next
            if list2 != None:
                sum = list2.val + sum
                list2 = list2.next

            sum = sum + carry
            carry = sum // 10
            newNode = ListNode(sum % 10)
            temp.next = newNode
            temp = temp.next
        
        return dummyList.next

