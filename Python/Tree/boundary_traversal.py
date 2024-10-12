'''
    Time Complexity: O(N)
    Space Complexity: O(N)

    Where N is the number of nodes in the Binary Tree.
'''

# Binary tree node class for reference.
# class BinaryTreeNode:
#     def __init__(self, data):
#         self.data = data
#         self.left = None
#         self.right = None

def isLeafNode(root):
    if root.left is None and root.right is None:
        return True
    return False


def addLeftBoundary(root,ans):
    curr = root.left
    while curr:
        if not isLeafNode(curr):
            ans.append(curr.data)
        
        if curr.left:
            curr = curr.left
        else:
            curr = curr.right

    
def addRightBoundary(root,ans):
    curr = root.right
    stack = []
    while curr:
        if not isLeafNode(curr):
            stack.append(curr.data)
        
        if curr.right:
            curr = curr.right
        else:
            curr = curr.left

    while stack:
        ans.append(stack.pop())

def addLeafNodes(root,ans):
    if isLeafNode(root):
        ans.append(root.data)
        return
    if root.left:
        addLeafNodes(root.left,ans)
    if root.right:
        addLeafNodes(root.right,ans)
# Functions to traverse on each part.
def traverseBoundary(root):
    
    # Write your code here.
    ans = []
    if root is None:
        return ans
    if not isLeafNode(root):
        ans.append(root.data)
    addLeftBoundary(root,ans)
    addLeafNodes(root,ans)
    addRightBoundary(root,ans)
    return anss