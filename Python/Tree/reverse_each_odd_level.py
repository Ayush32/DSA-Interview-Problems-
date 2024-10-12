# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

from collections import deque

def reverseOddLevels(root):
    if root is None:
        return None
        
    queue = deque()
    queue.append(root)
    
    level = 0
    while queue:
        size = len(queue)
        nodesValue = []
        nodes = []
            
        for i in range(size):
            curr = queue.popleft()
            nodes.append(curr)
            nodesValue.append(curr.val)
            
            if curr.left:
                queue.append(curr.left)
            if curr.right:
                queue.append(curr.right)
                
        if levelCount % 2 != 0:
            for i in range(len(nodesValue)):
                curr = nodes[i]
                curr.val = nodesValue[i]
            
        levelCount = levelCount + 1
        
            
        return root
    
    
root = TreeNode(3)
root.left = TreeNode(9)
root.right = TreeNode(20)
root.right.left = TreeNode(15)
root.right.right = TreeNode(7)



print(reverseOddLevels(root))