# Definition for a binary tree node.
from collections import deque
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        



class Solution:
    
    def solve(p,q):
        if p is None and q is None:
            return True
        if p.val  != q.val :
            return False
        
        return solve(p.left,q.right) and solve(p.right,q.left)
    
    def invertTree(root):
        return root is None or solve(p.left,q.left) 
        