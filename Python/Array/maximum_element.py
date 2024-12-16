def maximumElement(arr):
    maximum1 = float('-inf') # float('-inf') // negative infinity and float('inf') // postivie infitnity
    maximum2 = float('-inf') # float('-inf')

    
    for i in range(len(arr)):
        if maximum1 < arr[i]:
            maximum2 = maximum1
            maximum1 = arr[i]
        elif maximum2 < arr[i]:
            maximum2 = arr[i]
    print(maximum1)
    print(maximum2)
         
arr = [4,7,1,2,8,10,3]
maximumElement(arr)