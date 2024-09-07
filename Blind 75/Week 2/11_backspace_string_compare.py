


def backspaceCompare(s, t) -> bool:
        stack1 = []
        stack2 = []

        for i in range(len(s)):
            if len(stack1) != 0 and s[i] == "#":
                stack1.pop()
            elif s[i] != "#":
                stack1.append(s[i])
        
        for i in range(len(t)):
            if len(stack2) != 0 and t[i] == "#":
                stack2.pop()
            elif t[i] != "#":
                stack2.append(t[i])
         
        print(stack1)
        print(stack2)   
        return stack1 == stack2
    

s = "y#fo##f"
t = "y#f#o##f"

print(backspaceCompare(s,t))