def longestSubstringWithoutcharacter(s):
    hashmap = set()
    start = 0
    end = 0
    n = len(s)
    maxLength = 0
    while start < n:
        if s[start] not in hashmap:
            maxLength = max(start - end + 1, maxLength)
            hashmap.add(s[start])
            start = start + 1
        else:
            hashmap.remove(s[end])
            end = end + 1
            
    return maxLength
    
s = "abcabcbbefghijjgds"
print(longestSubstringWithoutcharacter(s))