'''Method 1: The idea is to traverse the given Binary Tree. For every node, check if it is a leaf node. If yes, 
then return 1. If not leaf node then if the left subtree is NULL, then recur for the right subtree. 
And if the right subtree is NULL, then recur for the left subtree. 
If both left and right subtrees are not NULL, then take the minimum of two depths.'''


from collections import deque
class TreeNode:
    
    def __init__(self,val = 0,left = None,right = None) -> None:
        self.val = val
        self.left = left
        self.right = right


def minDepthOfTheBinaryTree(root):
    if root is None:
        return 0
    lh = minDepthOfTheBinaryTree(root.left)
    rh = minDepthOfTheBinaryTree(root.right)
       
    if lh == 0 and rh == 0:
        return 1 + max(lh,rh)
    
    return 1 + min(lh,rh)

def minDepthLevelOrder(root):
    if root is None:
        return 0
    queue = deque()
    queue.append(root)
    count = 1
    
    while queue:
        size = len(queue)
        for i in range(size):
            node = queue.popleft()
            
            # check whether current node is left node or node or not if it is return count because it is a minimum, and it can be a shoretest path
            # from root to nearest leaf node
            if node.left == None and node.right == None:
                return count
            
            if node.left:
                queue.append(node.left)
            
            if node.right:
                queue.append(node.right)
        count = count + 1        
    return  count


root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)

root.right.left = TreeNode(7)
root.right.right = TreeNode(8)

print(minDepthOfTheBinaryTree(root))
print(minDepthLevelOrder(root))