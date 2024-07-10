# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return root
    
        q = deque()
        level = 0
        q.append(root)
        while q:

            qSize = len(q)
            nodesValue = []
            nodes = []

            for i in range(qSize):

                curr = q.popleft()
                nodesValue.append(curr.val)
                nodes.append(curr)

                if curr.left:
                    q.append(curr.left)
                if curr.right:
                    q.append(curr.right)

                
            
            if level % 2 != 0:

                nodesValue.reverse()
                for i in range(len(nodesValue)):
                    curr = nodes[i]
                    curr.val = nodesValue[i]

            level = level + 1
        
        return root
