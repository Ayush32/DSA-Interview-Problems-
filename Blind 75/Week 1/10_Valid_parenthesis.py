from collections import deque


def valid_parenthesis(s):
    stack = []
    
    for i in s:
        if i == '[' or i == '{' or i == '(':
            stack.append(i)
            
        else:
            if len(stack)== 0:
                return False
            else:
                
                if i == ')' and stack[-1] != '(':
                    return False
                if i == '}' and stack[-1] != '{':
                    return False
                if i == ']' and stack[-1] != '[':
                    return False
            
                stack.pop()
            
    return len(stack) == 0


s = "()[{}"
if valid_parenthesis(s) == True:
    print("Valid Parenthesis")
else:
    print("Not Valid Parenthesis")