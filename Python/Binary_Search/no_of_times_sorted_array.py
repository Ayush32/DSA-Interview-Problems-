def rotatedArray(arr):
    low = 0
    high = len(arr) - 1
    N = len(arr)

    while low <= high:
        mid = low + (high - low) // 2
        prev = (mid + N - 1) % N
        next = (mid + 1) % N

        if(arr[mid] < arr[next] and arr[mid] < arr[prev]):
            return mid
        elif arr[high] >= arr[mid]:
            high = mid - 1
        elif arr[low] <= arr[mid]:
            low = mid + 1

    return -1

arr = [11,12,15,18,2,5,6,8]
print(rotatedArray(arr))