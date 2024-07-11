def isIdentical(root,subroot):
    if root is None and subroot is None:
        return True
    if root is None or subroot is None:
        return False
    
    return (root.val == subroot.val) and isIdentical(root.left,subroot.left) and isIdentical(root.left,subroot.right)


def subtree(root,subroot):
    if root is None:
        return False
    if subroot is None:
        return False
    
    if isIdentical(root,subroot):
        return True

    return isSubtree(root.left,subroot.left) or isSubtree(root.left,root.right)
        