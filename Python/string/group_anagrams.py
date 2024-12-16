from collections import defaultdict
def groupAnagrams(strs):
    hashmap = defaultdict(list)
    
    for s in (strs):
        key = ''.join(sorted(s))
        # print(sorted(s))
        hashmap[key].append(s)

    return list(hashmap.values())

strs = ["eat","tea","tan","ate","nat","bat"]
print(groupAnagrams(strs))