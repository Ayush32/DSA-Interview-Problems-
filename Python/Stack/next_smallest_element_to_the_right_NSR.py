def nextGreaterElementLeft(arr):
    n = len(arr)
    stack = []
    NSR  = [-1] * n
    for i in range(n-1,-1,-1):
        
        while stack:
            
            if stack[-1] < arr[i]:
                ngl[i] = stack[-1]
                break
            
            stack.pop()
            
        stack.append(arr[i])
        
    return NSR




arr = [7,12,1,20]
print(nextGreaterElementLeft(arr))