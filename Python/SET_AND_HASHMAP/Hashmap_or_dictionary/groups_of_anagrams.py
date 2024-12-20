from collections import defaultdict

def groupsAnagram(strs):
    hashmap = defaultdict(list)
    
    for s in (strs):
        key = ''.join(sorted(s))
        hashmap[key].append(s)

    return list(hashmap.values())   


arr = ["eat","tea","tan","ate","nat","bat"]
print(groupsAnagram(arr))
