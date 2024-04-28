def bubbleSort(arr):
    i = 0
    j = 0
    n = len(arr)
    swapped = False
    while(i < n-1):
        swapped = False
        while(j < n - i -1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
                swapped =  True
            j = j + 1
        
        if swapped == False:
            break
        i = i + 1        
                
    return arr


arr = [5,1,2,3,7,4,6,9,8]
bubbleSort(arr)
print(arr)