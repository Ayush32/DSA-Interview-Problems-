def binarySearch(arr,target):
    low = 0
    ans = -1
    high = len(arr) - 1
    while low <= high:
        mid = low + (high - low)//2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:  # arr[mid] > target
            low = mid + 1
        else:
            high = mid - 1  
    return ans

arr = [1,3,5,5,5,12,16]
target = 5
# first= 2 last = 5
print(binarySearch(arr,target))