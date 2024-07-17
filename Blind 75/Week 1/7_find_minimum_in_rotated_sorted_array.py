def minimumRotatedSortedArray(arr):
    low = 0
    high = len(arr) - 1
    n = len(arr)
    while low <= high:
        mid = low + (high - low)//2
        next = (mid + 1) % n 
        prev = (mid + n - 1) % n
        
        if arr[prev] > arr[mid] and arr[next] > arr[mid]:
            return arr[mid]
        
        elif arr[mid] <= arr[high]:
            high = mid - 1
        elif arr[mid] >= arr[low]:
            low = mid + 1
            
    return -1

arr = [3,4,5,1,2]
print(minimumRotatedSortedArray(arr))
         