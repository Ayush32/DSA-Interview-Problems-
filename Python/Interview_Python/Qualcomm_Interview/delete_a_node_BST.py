'''1. Find the node to be deleted
case 1.  Node has no children - > Simply remove it
case 2. Node has one Chold. Replace the node with its child
case 3. Node has both children -> find the inorder successor (smallest value in its right) '''

class TreeNode:
    def __init__(self,val=0, left = None,right = None):
        self.val = val
        self.left = left
        self.right = right
 
def findMin(node):
    while node.left:
       node = node.left
       
    return node
def deleteBSTNode(root,key):
    if not root:
        return root
    
    if root.val > key:
        root.left = deleteBSTNode(root.left,key)
    if root.val < key:
        root.right = deleteBSTNode(root.right,key)
        
    else:
        # Case 1. # if no  children 
        if not root.left:
            return root.right
        elif not root.right:
            return root.left
        
        # Case 2. node have two children
        # find minium
        temp = findMin(root.right)
        root.val = temp.val
        root.right = deleteBSTNode(root.right,temp.val)
        
    return root


def inorderTraversal(root):
    if root:
        inorderTraversal(root.left)
        print(root.val, end=" ")
        inorderTraversal(root.right)

# Example Usage:
"""
        50
       /  \
      30   70
     /  \  /  \
    20  40 60  80
"""
root = TreeNode(50)
root.left = TreeNode(30)
root.right = TreeNode(70)
root.left.left = TreeNode(20)
root.left.right = TreeNode(40)
root.right.left = TreeNode(60)
root.right.right = TreeNode(80)

print("BST before deletion:")
inorderTraversal(root)
print("\nDeleting 50...")
root = deleteBSTNode(root, 50)
print("BST after deletion:")
inorderTraversal(root)