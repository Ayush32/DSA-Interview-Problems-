
def remvcecharacter(s):
    
    n = len(s)
    ans = ""
    i = 1 
    while i < len(s):
        while s[i] == s[i-1]:
            i = i + 1
            
        ans += s[i]
        i = i + 1
    return ans

s = "aabb"

print(remvcecharacter(s))