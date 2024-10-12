class TreeNode:
    def __init__(self,x = 0,left = None,right = None):
        self.data = x
        self.left = left
        self.right = right
        
global ans

def solve(root,path,totalSum):
    if root is None:
        return 0
    path = path + str(root.data)
    
    if root.left is None and root.right is None:
        totalSum[0] += int(path)
        
    else:
        solve(root.left,path,totalSum)
        solve(root.right,path,totalSum)
        

def rootLeaf(root):
    # global ans
    totalSum = [0]  # Reset ans before calculation
    solve(root,"",totalSum)
    return totalSum[0]
    
        
root = TreeNode(5)
root.left = TreeNode(4)
root.right = TreeNode(8)
# root.left.left = TreeNode(11)



print(rootLeaf(root))