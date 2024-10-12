def nextGreaterElementLeft(arr):
    n = len(arr)
    stack = []
    ngl  = [-1] * n
    for i in range(n):
        
        while stack:
            
            if stack[-1] > arr[i]:
                ngl[i] = stack[-1]
                break
            
            stack.pop()
            
        stack.append(arr[i])
        
    return ngl




arr = [7,12,1,20]
print(nextGreaterElementLeft(arr))