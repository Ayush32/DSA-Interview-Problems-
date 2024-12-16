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
        
    #        
            
    
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
            # ngrElement[i] = -1
            
        stack.append(arr[i])
    
    return ngrElement

arr = [7,12,1,20]
print(nextGreaterElement(arr))



def nextGreaterElement(arr):
    """
    Finds the next greater element for each element in the array.
    
    For each element in the array, the function finds the first greater element 
    to its right and returns a list of these next greater elements. If no such 
    element exists, -1 is returned for that position.
    
    Args:
    arr (list of int): The input list of integers.
    
    Returns:
    list of int: A list where each element is the next greater element of the 
                 corresponding input element, or -1 if no greater element exists.
    """
    
    n = len(arr)
    stack = []
    ngrElement = [0] * n
    
    for i in range(n-1, -1, -1):
        # Remove elements from the stack that are less than or equal to the current element
        while stack:
            if stack[-1] > arr[i]:
                ngrElement[i] = stack[-1]
                break
            stack.pop()
        ngrElement[i] = -1
        # Push the current element onto the stack
        stack.append(arr[i])
    
    return ngrElement
