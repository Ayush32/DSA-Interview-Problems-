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
    ''''''
    def connect(self, root: 'Optional[Node]') -> 'Optional[Node]':
        '''You are given a perfect binary tree where all leaves are on the same level, and every parent has two children. The binary tree has the following definition:

        struct Node {
        int val;
        Node *left;
        Node *right;
        Node *next;
        }
        Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL. '''
        if root is None:
            return root

        q = deque()
        q.append(root)

        while q:
            qSize = len(q)
            for i in range(qSize):
                curr = q.popleft()
                '''If the current node is not the last node in the level (i < qSize - 1), its next pointer
                is set to the next node in the queue (q[0]), which is the next node at the same level.'''
                if i < qSize - 1:
                    curr.next = q[0]
                
                if curr.left:
                    q.append(curr.left)
                    q.append(curr.right)
                
        return root


        
        
        