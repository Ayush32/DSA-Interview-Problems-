from collections import deque

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def levelOrder(root):
        if root == None:
            return []
        queue = deque()
        queue.append(root)
        result = []
        while queue:
            size = len(queue)
            current_level = []
            for i in range(size):
                node =  queue.popleft()
                val  = node.val
                current_level.append(val)
                
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            result.append(current_level)
        return result
    
    
root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)

print("Level Order Traversal:")
print(levelOrder(root))