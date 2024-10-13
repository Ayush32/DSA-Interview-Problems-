def characterReplacement(self, s: str, k: int) -> int:
        d = defaultdict(int)
        i = 0
        j = 0
        ans = 0
        maxFreq =  0
        while j < len(s):
            d[s[j]] += 1
            
            maxFreq = max(maxFreq,d[s[j]])
            
            if (j - i + 1 - maxFreq) <= k:
                ans = max(j - i + 1,maxFreq)
                
            else:
                d[s[i]] -= 1
                i = i + 1
            j = j + 1
            
        return ans
            