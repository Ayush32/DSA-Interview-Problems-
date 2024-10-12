def nextSmallerElementLeft(arr):
    n = len(arr)
    stack = []
    NSL  = [-1] * n
    for i in range(n):
        
        while stack:
            
            if stack[-1] < arr[i]:
                NSL[i] = stack[-1]
                break
            
            stack.pop()
            
        stack.append(arr[i])
        
    return NSL




arr = [7,12,1,20]
print(nextSmallerElementLeft(arr))