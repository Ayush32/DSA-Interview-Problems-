from collections import deque
def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if root == None:
            return []
        queue = deque()
        queue.append(root)
        level = []
        while queue:
            size = len(queue)
            for i in range(1,size + 1):
                node =  queue.popleft()
                val  = node.val
                if i == size:
                    level.append(val)
                
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return level