class TreeNode:
    
    def __init__(self,x = 0,left = None,right= None):
        self.data = x
        self.left = left
        self.right = right
        
    
        

def allPaths(root,paths,path):
    if root == None:
        return []
    
    path = path + str(root.data)
        
    if root.left is None and root.right is None:
        paths.append(path)
    else:
        path = path + "->"
        
    allPaths(root.left,paths,path)
    allPaths(root.right,paths,path)
 
    
    
def binaryPaths(root):
    paths = []
    str = ""
    allPaths(root,paths,str)
    return paths


root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)
root.right.right = TreeNode(6)
print(binaryPaths(root))


