def nextAlpha(arr,target):
    low = 0
    high = len(arr) - 1
    ans = ""
    while low <= high:
        mid = low + (high - low)//2

        if(arr[mid] == target):
            return mid
        elif arr[mid] > target:
            ans = arr[mid]
            high = mid - 1
        else:
            low = mid + 1
    return ans

arr = ['a','c','f','g','h']
target = 'd'
print(nextAlpha(arr,target))