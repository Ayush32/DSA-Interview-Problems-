def number_of_Time_Sorted_array(arr):
    low = 0
    high = len(arr) - 1
    N = len(arr)
    while low <= high:
        mid = low + (high -low) // 2
        prev = (mid + N - 1) % N
        nextv = (mid + 1) % N
        
        if arr[mid] <= arr[prev] and arr[mid] <= arr[nextv]:
            return mid
        if arr[mid] <= arr[high]:
            high = mid - 1
        elif arr[mid] >= arr[low]:
            low = mid + 1
    
    return -1
        

arr = [11,12,15,18,2,5,6,8]
print(number_of_Time_Sorted_array(arr))