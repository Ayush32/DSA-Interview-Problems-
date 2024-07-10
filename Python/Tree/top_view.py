def topView(self,root):
        if root is None:
            return []
        topView = []
        queue = deque()
        hashmap = {}
        # key-> line, value->node value
        queue.append((0,root))
        
        while queue:

            line, node = queue.popleft()
                
    
            if line not in hashmap:
                hashmap[line] = node.data
                    
            if node.left:
                queue.append((line - 1,node.left))
            if node.right:
                queue.append((line + 1,node.right))
                
        for val in sorted(hashmap.keys()):
            topView.append(hashmap[val])
        return topView