def is_valid_parenthesis(s):
    stack = []

    for char in s:
        if char in "({[":
            stack.append(char)
        else:
            if not stack:
                return False
            top = stack.pop()
            if char == ')' and top != '(':
                return False
            if char == '}' and top != '{':
                return False
            if char == ']' and top != '[':
                return False

    return not stack

def main():
    s = "{{}}"
    if is_valid_parenthesis(s):
        print("Valid Parenthesis")
    else:
        print("Not Valid Parenthesis")

if __name__ == "__main__":
    main()
