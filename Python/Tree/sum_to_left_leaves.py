
class TreeNode:
    def __init__(self,x = 0,left = None,right = None):
        self.data = x
        self.left = left
        self.right = right

def solve(root,totalSum,i):
    if root is None:
        return 0
    
    if root.left == None and root.right == None:
        totalSum [0] = totalSum[0] + root.data * i
    
    solve(root.left,totalSum,1)
    solve(root.right,totalSum,0)
    


def sumToLeftLeaves(root):
    totalSum = [0]  # Use a list to allow modification within helper
    i = 0
    solve(root,totalSum,i)
    return totalSum[0]
    
        
root = TreeNode(3)
root.left = TreeNode(9)
root.right = TreeNode(20)
root.right.left = TreeNode(15)
root.right.right = TreeNode(7)



print(sumToLeftLeaves(root))