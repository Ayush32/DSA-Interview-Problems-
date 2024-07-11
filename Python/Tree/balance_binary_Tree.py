def heightOfBinaryTree(root):
    if root is None:
        return 0
    
    lh = heightOfBinaryTree(root.left)
    rh = heightOfBinaryTree(root.right)
    
    return max(lh,rh) + 1

def isBalanced(root):
    if root is None:
        return -1
    
    lh = heightOfBinaryTree(root.left)
    rh = heightOfBinaryTree(root.right)
    
    if abs(lh - rh) <= 1 and isBalanced(root.left) and isBalanced(root.right):
        return True
    
    return False

    
    
# Base condition
    if root is None:
        return True
 
    # Compute height of left subtree
    lh = isBalanced(root.left)
 
    # If left subtree is not balanced,
    # return 0
    if lh == 0:
        return 0
 
    # Do same thing for the right subtree
    rh = isBalanced(root.right)
    if rh == 0:
        return 0
 
    # Allowed values for (lh - rh) are 1, -1, 0
    if (abs(lh - rh) > 1):
        return 0
 
    # If we reach here means tree is
    # height-balanced tree, return height
    # in this case
    else:
        return max(lh, rh) + 1
    