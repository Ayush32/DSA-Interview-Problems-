def minimumRotatedSortedArray(arr):
    low = 0
    high = len(arr) - 1
    n = len(arr)
    while low <= high:
        mid = low + (high - low)//2
        next = (mid + 1) % n 
        prev = (mid + n - 1) % n
        
        if arr[prev] > arr[mid] and arr[next] > arr[mid]:
            return mid
        
        elif arr[mid] <= arr[high]:
            high = mid - 1
        elif arr[mid] >= arr[low]:
            low = mid + 1
            
    return -1

def binarySearch(arr,low,high,target):
    
    while low <= high:
        mid = low + (high - low) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
            
    return -1


# def binarySearchDescending(arr,low,high,target):
#     while low <= high:
#         mid = low + (high - low)/2
        
#         if arr[mid] == target:
#             return mid
#         elif arr[mid] > target:
#             high = mid + 1
#         else:
#             high = mid - 1


arr = [4,5,6,7,0,1,2]
target = 0
minIndex = minimumRotatedSortedArray(arr)
leftpart = binarySearch(arr,0,minIndex-1,target)
rightPart = binarySearch(arr,minIndex,len(arr) - 1,target)

if leftpart != -1:
    print(leftpart)
else:
    print(rightPart)
