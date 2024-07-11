# Definition for a binary tree node.
from collections import deque
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        



class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return None
        q = deque()
        q.append(root)
        
        while q:
            size = len(q)
            
            for i in range(size):
                
                currNode = q.popleft()
                
                currNode.left, currNode.right = currNode.right, currNode.left
                if currNode.left:
                    q.append(currNode.left)
                if currNode.right:
                    q.append(currNode.right)
                    
        return root
        