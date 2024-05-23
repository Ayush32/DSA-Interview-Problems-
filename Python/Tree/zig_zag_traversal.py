class Node:

    # A utility function to create a new node
    def __init__(self, key):
        self.data = key
        self.left = None
        self.right = None

def zigzagTraversal(root):

    if root is None:
        return []

    queue = []
    level = []
    ans = []
    queue.append(root)
    leftToRight = True
    while len(queue) > 0:

        size = len(queue)
        for i in range(0,size):
            val = queue[0].data
            node = queue.pop(0)
            
            level.append(val)

            if node.left is not None:
                queue.append(node.left)
            if node.right is not None:
                queue.append(node.right)

            # i = i + 1
        if leftToRight == False:
            reversed(level)
        
        ans.extend(level)
        level.clear()
        if leftToRight == True:
            leftToRight = False
        else:
            leftToRight = True
    return ans
    
if __name__ == '__main__':
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print("Level Order Traversal of binary tree is -")
    ans = []
    ans = zigzagTraversal(root)
    print(ans)