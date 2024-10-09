def floor_element(arr,target):
    low = 0
    high = len(arr) - 1
    N = len(arr)
    ans = -1
    while low <= high:
        mid = low + (high -low) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] > target:
            ans = arr[mid]
            high = mid - 1
        else:
            low = mid + 1
            
    return ans    

arr = [1,3,5,6,8,9]
target = 4
print(floor_element(arr,target))