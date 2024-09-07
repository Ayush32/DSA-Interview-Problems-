def maxDepth(root) -> int:
    if root is None:
        return 0
    leftSubtree = self.maxDepth(root.left)
    rightSubtree = self.maxDepth(root.right)

    return max(leftSubtree,rightSubtree) + 1
        