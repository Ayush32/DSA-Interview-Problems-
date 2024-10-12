def nextGreaterElement(arr):
    # oN2
    
    # ngr = []
    n = len(arr)
    # for i in range(0,n  - 1):
    #     flag = False
        
    #     for j in range(i + 1,n):
            
    #         if arr[i] < arr[j]:
    #             ngr.append(arr[j])
    #             flag = True
    #             break
        
    #     if flag == False:
    #         ngr.append(-1)
            
    
    # ngr.append(-1)
    
    # optimize code
    
    stack = []
    ngrElement = [-1] * n
    for i in range(n-1,-1,-1):
        
        while stack:
            if stack[-1] > arr[i]:
                ngrElement[i] = stack[-1]
                break
            stack.pop()
            
        stack.append(arr[i])
    
    return ngrElement

arr = [7,12,1,20]
print(nextGreaterElement(arr))