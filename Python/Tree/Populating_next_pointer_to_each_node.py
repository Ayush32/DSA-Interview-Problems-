from collections import deque

class Solution:
    def connect(self, root: 'Optional[Node]') -> 'Optional[Node]':

        if root is None:
            return root

        q = deque()
        q.append(root)

        while q:
            qSize = len(q)
            for i in range(qSize):
                curr = q.popleft()
                
                if i < qSize - 1:
                    curr.next = q[0]
                
                if curr.left:
                    q.append(curr.left)
                    q.append(curr.right)
                
        return root


        