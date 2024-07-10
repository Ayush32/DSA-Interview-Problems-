from collections import deque
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def zigzagTraversal(root):

    if root is None:
        return []

    queue = deque()
    
    ans = []
    queue.append(root)
    leftToRight = True
    while queue:

        size = len(queue)
        level = []
        for i in range(size):
            node = queue.popleft()
            
            level.append(node.val)

            if node.left is not None:
                queue.append(node.left)
            if node.right is not None:
                queue.append(node.right)

            # i = i + 1
        if leftToRight == False:
            level = reversed(level)
        
        ans.append(level)
        # level.clear()
        leftToRight = not leftToRight
    return ans
    
if __name__ == '__main__':
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)

    print("Level Order Traversal of binary tree is -")
    ans = []
    ans = zigzagTraversal(root)
    print(ans)