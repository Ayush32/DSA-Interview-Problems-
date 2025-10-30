def merge(left_arr,right_arr):
    left = 0
    right = 0
    res = []
    while(left < len(left_arr) and right < len(right_arr)):
        if left_arr[left] < right_arr[right]:
            res.append(left_arr[left])
            left = left + 1
        else:
            res.append(right_arr[right])
            right = right + 1
    
    while left < len(left_arr):
        res.append(left_arr[left])
        left = left + 1
    # // remaining element in right side
    while right < len(right_arr):
        res.append(right_arr[right])
        right = right + 1
    

    return res
        
def mergeSort(arr):
   
   if len(arr) <= 1:
       return arr
   mid = len(arr)//2
   left_arr = arr[:mid]
   right_arr = arr[mid:]

   left_arr = mergeSort(left_arr)
   right_arr = mergeSort(right_arr)

   return merge(left_arr,right_arr)

arr = [5,6,2,7,8,9,2,4,3]
sorted_arr = mergeSort(arr)
print(sorted_arr)