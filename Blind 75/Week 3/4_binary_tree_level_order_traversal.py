from collections import deque
def binary_level_order_traversal(root):
    if root is None:
        return
    
    queue = deque()
    queue.append(root)
    levelOrderResult = []
    while queue:

        size = len(deque)
        
        for i in range(size):
            
            node = queue.popleft()
            
            level.append(node.left)
            
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)
            
            
        levelOrderResult.append(level)
        level.clear()

    return levelOrderResult
            
    