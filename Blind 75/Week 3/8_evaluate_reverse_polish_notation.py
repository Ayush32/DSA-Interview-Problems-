'''
You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that represents the value of the expression.

Note that:

The valid operators are '+', '-', '*', and '/'.
Each operand may be an integer or another expression.
The division between two integers always truncates toward zero.
There will not be any division by zero.
The input represents a valid arithmetic expression in a reverse polish notation.
The answer and all the intermediate calculations can be represented in a 32-bit integer.
 

Example 1:

Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9
Example 2:

Input: tokens = ["4","13","5","/","+"]
Output: 6
Explanation: (4 + (13 / 5)) = 6
Example 3:

Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
Output: 22
Explanation: ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
= ((10 * (6 / (12 * -11))) + 17) + 5
= ((10 * (6 / -132)) + 17) + 5
= ((10 * 0) + 17) + 5
= (0 + 17) + 5
= 17 + 5
= 22
'''
# [2,1] , s[i] = +, pop = 2 and 1 , evalute = 2 + 1 = 3, push into stack
# [3,3] , s[i] = "*", pop = 3 and 3, evalate = 3 * 3 = 9

import math
def reverse_polish_notation(tokens):
    stack = []
    
    for i in range(len(tokens)):
        
        if tokens[i] == "+" or tokens[i] == "-" or tokens[i] == "*" or tokens[i] == "/":
            
            operand1 = stack[-1]
            stack.pop()
            operand2 = stack[-1]
            stack.pop()
        
            if tokens[i] == "+":
                evaluate = operand1 + operand2
                stack.append(evaluate)
            elif tokens[i] == "*":
                evaluate = operand1 * operand2
                stack.append(evaluate)
            elif tokens[i] == "-":
                evaluate = operand2 - operand1
                stack.append(evaluate)
            elif tokens[i] == "/":
                evaluate = math.ceil(operand2 / operand1)
                stack.append(evaluate)
            
        else:
            stack.append(int(tokens[i]))
            
    # ans = stack[0]
    return ans

tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
print(reverse_polish_notation(tokens))