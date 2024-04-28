def merge(arr,start,mid,end):
    left = start
    right = mid + 1
    res = []
    while(left <= mid and right <= end):
        if arr[left] <= arr[right]:
            res.append(arr[left])
            left = left + 1
        else:
            res.append(arr[right])
            right = right + 1
    
    while left <= mid:
        res.append(arr[left])
        left = left + 1
    # // remaining element in right side
    while right <= end:
        res.append(arr[right])
        right = right + 1
    

    for i in range(len(res)):
        arr[start + i] = res[i]
    
    return arr

def mergeSort(arr, start, end):
    if start < end:
        mid = (start + end) // 2
        mergeSort(arr, start, mid)
        mergeSort(arr, mid + 1, end)
        merge(arr, start, mid, end)

arr = [5,6,2,7,8,9,2,4,3]

mergeSort(arr,0,len(arr) - 1)
print(arr)