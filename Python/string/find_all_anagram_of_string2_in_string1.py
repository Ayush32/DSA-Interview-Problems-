def isAnagram(str1,str2):
    n = len(str1)
    m = len(str2)

    if n != m:
        return False
    
    s1 = sorted(str1)
    s2 = sorted(str2)

    for i in range(0,len(s1)):
        if s1[i] != s2[i]:
            return False
    return True

def findAllAnagramIndices(str,ptr,n,m):
    j = 0
    i = 0
    indicesAns = []
    s = ""
    while j < len(str):

        s = s + str[j]
        
        if len(s) == len(ptr):
            if(isAnagram(s,ptr) == True):
                indicesAns.append(s)
                i = i + 1
                j = i
                s = ""
            else:
                s = ""
                i = i + 1
                j = i
        else:
            j = j + 1
    
    return indicesAns

str = "cbaebabacd"
ptr = "abc"
n = len(str)
m = len(ptr)
ans = []
ans = findAllAnagramIndices(str,ptr,n,m)
print(ans)
