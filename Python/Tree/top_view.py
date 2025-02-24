from collections import deque

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def topView(root):
        if root is None:
            return []
        topView = []
        queue = deque()
        hashmap = {}
        # key-> line, value->node value
        queue.append((0,root))
        
        while queue:

            line, node = queue.popleft()
            if line not in hashmap:
                hashmap[line] = node.val
                    
            if node.left:
                queue.append((line - 1,node.left))
            if node.right:
                queue.append((line + 1,node.right))
                
        for key in sorted(hashmap.keys()):
            topView.append(hashmap[key])
        return topView
    
    
if __name__ == '__main__':
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    # root.left.left = TreeNode(4)
    # root.left.right = TreeNode(5)
    # root.right.leftt = TreeNode(6)
    # root.right.right = TreeNode(7)
    print("Top View Traversal of binary tree is -")
    ans = []
    ans = topView(root)
    print(ans)