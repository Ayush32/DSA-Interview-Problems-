import collections as c

def groupsAnagram(arr):
    mp = c.defaultdict(list)
    for i in range(0,len(arr)):
        sorted_word = ''.join(arr[i])
        mp[sorted_word].append(arr[i])


    return list(mp.values())   


arr = ["eat","tea","tan","ate","nat","bat"]
print(groupsAnagram(arr))
