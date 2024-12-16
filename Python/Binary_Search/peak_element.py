def peakElement(arr):
    n = len(arr)
    # case 1
    # if n == 0:
    #     return 1
  
    # if arr[0] > arr[1]:
    #     return arr[0]
    # if arr[n-1] > arr[n-2]:
    #     return arr[n-1]

    low = 0
    high = len(arr)
    while low < high:
        mid = low + (high - low)//2
          # # case 2 what if the our first element is peak element we compare the first element with right next element
        if(mid == 0):
            if arr[mid] > arr[mid + 1]:
                return arr[mid]
            else:
                low = mid + 1
        if mid == n - 1:
            if arr[mid] > arr[mid - 1]:
                return arr[mid]
            else:
                high = mid - 1
        else:
            if arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1]:
                return arr[mid]
            elif arr[mid] < arr[mid + 1]:
                low = mid + 1
            else:
                high = mid - 1
    return -1

arr = [1,2,1,3,5,6,4]
print(peakElement(arr))