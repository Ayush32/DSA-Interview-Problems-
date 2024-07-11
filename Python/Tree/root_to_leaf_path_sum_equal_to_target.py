class TreeNode:
    def __init__(self,x = 0,left = None,right = None):
        self.data = x
        self.left = left
        self.right = right

ans = []
def allPaths(root,paths,sum_so_far,targetSum):
    if root == None:
        return []
    sum_so_far = sum_so_far + root.data
    paths.append(root.data)
    
    
    if root.left is None and root.right is None:
        if targetSum == sum_so_far:  # leaf node
            ans.append(list(paths))
            
    else:
        allPaths(root.left,paths,sum_so_far,targetSum)
        allPaths(root.right,paths,sum_so_far,targetSum)
    
    paths.pop()
    
def pathSum(root,targetSum):
    paths = []
    sum_so_far = 0
    allPaths(root,paths,sum_so_far,targetSum)
    return ans
    
# root = [5,4,8,11,null,13,4,7,2,null,null,5,1]

root = TreeNode(5)
root.left = TreeNode(4)
root.right = TreeNode(8)
root.left.left = TreeNode(11)
root.left.right = None
root.left.left.left = TreeNode(9)
root.left.left.right = TreeNode(2)

root.right.left = TreeNode(13)
root.right.right = TreeNode(4)
root.right.left.left = None
root.right.left.right = None

root.right.right.left = TreeNode(5)
root.right.right.right = TreeNode(1)

targetSum = 22
print(pathSum(root,targetSum))