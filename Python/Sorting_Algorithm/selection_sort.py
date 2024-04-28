def selectionSort(arr):
    i = 0
    n = len(arr)
    min_ind = 0
    while(i < n-1):
        j = i + 1
        # find the minimum element from unsorted part of the array
        min_ind = i
        while(j < n):
            if arr[min_ind] > arr[j]:
                min_ind = j
            j = j + 1
        # place minimum element in correct position in sorted part
        if min_ind != i:
            arr[i],arr[min_ind] = arr[min_ind],arr[i]
        i = i + 1
    return arr




arr = [5,1,4,2,3,7,6,9,8]
selectionSort(arr)
print(arr)