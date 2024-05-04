

def Balanced(str):
    stack = []
    for ch in str:
        if ch == '{' or ch == '[' or ch == '(':
            stack.append(ch)

        else:
            # if stack is empty
            if len(stack) == 0:
                return False
            else:
                # check close bracket and last char in stack is same or not if not return false
                if ch == ')' and stack[-1] != '(':
                    return False
                if ch == '}' and stack[-1] != '{':
                    return False
                if ch == ']' and stack[-1] != '[':
                    return False
                else:
                    stack.pop()
    return len(stack) == 0


A="{}" 
print(Balanced(A))