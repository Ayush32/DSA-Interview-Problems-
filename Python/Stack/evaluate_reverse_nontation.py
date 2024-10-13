def evaluateExprssion(tokens):
    stack = []
    result = 0
    operator = ["+","-","/","*"]
    for i in range(len(tokens)):
        if tokens[i]  == "+" or tokens[i] == "-" or tokens[i] == "*" or tokens[i] == "/":
            if len(stack) > 0:
                operand1 = stack.pop()
                operand2 = stack.pop()
            
            
            if tokens[i] == "+":
                cal = operand1 + operand2
                stack.append(cal)
            elif tokens[i] == "-":
                cal = operand1 - operand2
                stack.append(cal)
            elif tokens[i] == "*":
                cal = operand1 * operand2
                stack.append(cal)
            elif tokens[i] == "/":
                cal = operand1 / operand2
                stack.append(int(cal))
            
        else:
            stack.append(int(tokens[i]))
    
    return stack[0]

arr = ["2","1","+","3","*"]
print(evaluateExprssion(arr)) 
        
            