def linked_listCylce(root):
    hashmap = set()
    head = root
    while head is not None:
        if head in hashmap:
            return True
        hashmap.add(head)
    
    return False