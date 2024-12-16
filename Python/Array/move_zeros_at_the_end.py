def moveZerosEnd(arr):
    left = 0
    right = 1
    while right < len(arr):
        if arr[left] != 0:
            left = left + 1
        
        arr[left],arr[right] = arr[right],arr[left]
        right = right + 1
    
    return arr
    
    
    

arr = [1,4,0,2,0,4,7,9,0,2,0,9,1,5,0,3,5]
print(moveZerosEnd(arr))