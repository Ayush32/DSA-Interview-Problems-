def minimumElement(arr):
    minimum1 = float('inf') # float('-inf') negative infinity and postiive infinty
    minimum2 = float('inf') # float('-inf')
    
    for i in range(len(arr)):
        if minimum1 > arr[i]:
            minimum2 = minimum1
            minimum1 = arr[i]
        elif minimum2 > arr[i]:
            minimum2 = arr[i]
    print(minimum1)
    print(minimum2)
         
arr = [4,7,1,2,8,10,3]
print(sorted(arr))
print(reversed(arr))
minimumElement(arr)