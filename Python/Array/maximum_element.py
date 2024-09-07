def maximumElement(arr):
    maximum1 = arr[0]
    maximum2 = arr[1]
    
    for i in range(len(arr)):
        if maximum1 < arr[i]:
            maximum2 = maximum1
            maximum1 = arr[i]
        elif maximum2 < arr[i]:
            maximum2 = arr[i]
    print(maximum1)
    print(maximum2)
         
arr = [4,7,1,2,8,10,3]
maximumElement(arr)s