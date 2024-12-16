def removeDuplicate(arr):
    left = 0
    right = 1
    
    while right < len(arr):
        if arr[right] != arr[left]:
            left = left + 1
            arr[left] = arr[right]
            
        right = right + 1
    
    return left
    
    

arr = [1,2,2,3]
print(removeDuplicate(arr))