# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head == None or head.next == None:
            return head

        len = 1
        currNode = head
        while currNode.next:
            len += 1
            currNode = currNode.next

        currNode.next = head # making circular
        k = k % len
        rotationPoint = len - k
        while rotationPoint:
            currNode = currNode.next
            rotationPoint -= 1

        head = currNode.next
        currNode.next = None

        return head





        