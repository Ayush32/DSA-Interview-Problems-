from collections import deque
class TreeNode:
    
    def __init__(self,val = 0, left = None,right = None):
        self.val = val
        self.left = left
        self.right = right
        

def rightViewOfTree(root):
    q = deque()
    q.append(root)
    rightViewResult = []
    while q:
        size = len(q)
        for i in range(size):
            node = q.popleft()
            if i == size - 1:
                rightViewResult.append(node.val)
            
            if node.left:
                q.append(node.left)
            if node.right:
                q.append(node.right)
    
    return rightViewResult

root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)
root.right.left = TreeNode(6)
root.right.right = TreeNode(7)
root.left.left.left = TreeNode(8)
root.left.left.left.left = TreeNode(10)
print(rightViewOfTree(root))