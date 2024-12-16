def longestSubstringWithoutcharacter(s):
    hashmap = set()
    start = 0
    end = 0
    n = len(s)
    maxLength = 0
    substringStart = 0
    substringend = 0
    while start < n:
        if s[start] not in hashmap:
            if maxLength < (start - end + 1):
                maxLength = start - end + 1
            
            hashmap.add(s[start])
            start = start + 1
        else:
            hashmap.remove(s[end])
            end = end + 1
    print(s[end:start])     
    print(maxLength)
    
s = "abcabcbbefghijjgds"
longestSubstringWithoutcharacter(s)