class TreeNode:
    
    def __init__(self,val = 0,left = None,right = None) -> None:
        self.val = val
        self.left = left
        self.right = right


def heighOfTheBinaryTree(root):
       if root is None:
           return 0
       
       lh = heighOfTheBinaryTree(root.left)
       rh = heighOfTheBinaryTree(root.right)
       
       return max(lh,rh) + 1

root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)
root.right.left = TreeNode(7)
root.right.right = TreeNode(8)

print(heighOfTheBinaryTree(root))