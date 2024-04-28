
def partition(arr,low,high):
    pivot = arr[high]
    i = low - 1
    j = low
    while(j <= high):
        if arr[j] < pivot:
            i = i + 1
            arr[i],arr[j] = arr[j],arr[i]
        j = j + 1
    arr[i+1],arr[high] =arr[high],arr[i+1]
    return i + 1


def quickSort(arr,low,high):
    if(low < high):

        pi = partition(arr,low,high)
        quickSort(arr,low,pi -1)
        quickSort(arr,pi + 1,high) 

arr = [5,1,3,8,1,3,5,4]
quickSort(arr,0,len(arr) - 1)
print(arr)