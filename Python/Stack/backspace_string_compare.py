def backSpace(s,t):
    st1 = []
    st2 = []
    
    for i in range(len(s)):
        if s[i] != '#':
            st1.append(s[i])
        else:
            if len(st1) != 0:
                st1.pop()
                
    for i in range(len(t)):
        if t[i] != '#':
            st2.append(t[i])
        else:
            if len(st2) != 0:
                st2.pop()
                
    if len(st1) != len(st2):
        return False

    return st1 == st2
        

s = "a#c"
t = "a##c"

print(backSpace(s,t))
                