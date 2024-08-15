def lowest_common_ancestor(root,p,q):
    if root is None:
        return
    
    curr = root.val
    
    if curr < p.val and curr < q.val:
        return lowest_common_ancestor(root.right,p,q)
    if curr > p.val and curr > q.val:
        return lowest_common_ancestor(root.left,p,q)
    
    return root