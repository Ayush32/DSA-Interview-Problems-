from collections import defaultdict
def groupAnagrams(strs):
    anagrams_groups = defaultdict(list)
    for i in range(len(strs)):
        word = strs[i]
        sorted_word = ''.join(sorted(strs[i]))
        anagrams_groups[sorted_word].append(word)
    
    return list(anagrams_groups.values())
    



strs = ["eat","tea","tan","ate","nat","bat"]
print(groupAnagrams(strs))

a = "Ayush"
print(''.join(sorted(a)))