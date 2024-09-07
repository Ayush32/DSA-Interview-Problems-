def lengthOfLongestSubstring(self, s: str) -> int:
        hashmap = set()

        start = 0
        end = 0
        maxLength = 0
        while start < len(s):
            if s[start] not in hashmap:
                maxLength = max(start - end + 1,maxLength)
                hashmap.add(s[start])
                start = start + 1
            else:
                hashmap.remove(s[end])
                end = end + 1    
        return maxLength