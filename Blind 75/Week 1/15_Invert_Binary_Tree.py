'''
Given the root of a binary tree, invert the tree, and return its root.

 

Example 1:


Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
Example 2:


Input: root = [2,1,3]
Output: [2,3,1]
'''

from collections import deque

def inver_binary(root):
    
    q = deque()
    if root is None:
        return
    
    q.append(root)

    while q:
        size = len(q)
        
        for i in range(size):
            currNode = q.popleft()
            
            currNode.left, currNode.right = currNode.right,currNode.left
            
            if currNode.left:
                q.append(currNode.left)
            if currNode.right:
                q.append(currNode.right)
    
    return root
    