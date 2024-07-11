class TreeNode:
    def __init__(self,x = 0,left = None,right = None):
        self.data = x
        self.left = left
        self.right = right
ans = 0
def solve(root,path):
    if root is None:
        return 
    path = path + str(root.data)
    
    if root.left is None and root.right is None:
        ans = ans + int(path)
        
    else:
        solve(root.left,path)
        solve(root.right,path)
        

def rootLeaf(root):
    # global ans
    ans = 0  # Reset ans before calculation
    solve(root,"")
    return ans
    
        
root = TreeNode(5)
root.left = TreeNode(4)
root.right = TreeNode(8)
root.left.left = TreeNode(11)
root.left.left.left = TreeNode(9)
root.left.left.right = TreeNode(2)

root.right.left = TreeNode(13)
root.right.right = TreeNode(4)


root.right.right.left = TreeNode(5)
root.right.right.right = TreeNode(1)


print(rootLeaf(root))