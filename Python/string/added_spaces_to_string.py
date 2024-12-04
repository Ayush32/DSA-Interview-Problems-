def addSpaces(s, spaces):
        ans = ""
        curr_str = ""
        j = 0
        for i in range(len(s)):
                if j < len(spaces) and i == spaces[j]:
                    j = j + 1
                    ans += curr_str
                    ans += " "
                    curr_str = ""
                    curr_str += s[i] 
                
                else:
                    curr_str += s[i]
            
        curr_str = ""        
        for i in range(spaces[-1],len(s)):
            curr_str += s[i]
            
        ans += curr_str
        return ans
    
    
    # optimized 
def addSpaces(s, spaces):
        ans = ""
        curr_str = ""
        ind= 0
        for i in range(len(s)):
                if ind < len(spaces) and i == spaces[ind]:
                    ans += " "
                    ind = ind + 1
                
                ans+= s[i]
            

        return ans
    
s = "spacing"
spaces = [0,1,2,3,4,5,6]
print(addSpaces(s,spaces))