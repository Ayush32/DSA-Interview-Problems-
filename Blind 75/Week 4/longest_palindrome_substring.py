def longestPalindrome(s):
        if len(s) <= 1:
            return s
        
        LPS = ""
        
        for i in range(1,len(s)):
            low = i
            high = i
            
            while s[low] == s[high]:
                low = low - 1
                high = high + 1
                
                if low == -1 or high == len(s):
                    break
            palindrome = s[low+1:high]
            if len(palindrome) > len(LPS):
                LPS = palindrome
            
            
            low = i - 1
            high = i
            
            while s[low] == s[high]:
                low = low - 1
                high = high + 1
                
                if low == -1 or high == len(s):
                    break
            palindrome = s[low+1:high]
            if len(palindrome) > len(LPS):
                LPS = palindrome
                    
        return LPS
    
s = "baacaa"
print(longestPalindrome(s))