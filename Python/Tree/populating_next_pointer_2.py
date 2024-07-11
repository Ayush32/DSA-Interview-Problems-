"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

from collections import deque

class Solution:
    def connect(self, root: 'Optional[Node]') -> 'Optional[Node]':

        if root is None:
            return root

        q = deque()
        q.append(root)

        while q:
            qSize = len(q)
            for i in range(qSize):
                curr = q.popleft()
                
                if i < qSize - 1:
                    curr.next = q[0]
                
                if curr.right:
                    q.append(curr.right)
                if curr.left:   
                    q.append(curr.left)
                
        return root


        
        
        