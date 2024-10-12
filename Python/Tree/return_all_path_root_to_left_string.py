
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
        
        
def helper(root,allPath,path):
    if root is None:
        return []
    
    path = path + str(root.val)
    
    if root.left != None or root.right != None:
        path = path + "->"
        
    if root.left == None and root.right == None:
        allPath.append(path)
        
    helper(root.left,allPath,path)
    helper(root.right,allPath,path)
    
    
    
def rootToLeaf(root):
    allPath = []
    path = ""
    helper(root,allPath,path)
    return allPath


if __name__ == '__main__':
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = None
    root.left.right = TreeNode(5)
    
    ans = []
    ans = rootToLeaf(root)
    print(ans)