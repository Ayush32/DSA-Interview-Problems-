def floor_element(arr,target):
    low = 0
    high = len(arr) - 1
    N = len(arr)
    ans = -1
    while low <= high:
        mid = low + (high -low) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            ans = arr[mid]
            low = mid + 1
        else:
            high = mid - 1
            
    return ans    

arr = [1,2,8,10,11,12,19]
target = 8
print(floor_element(arr,target))