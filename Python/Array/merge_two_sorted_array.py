def mergeTwoSorted(arr1,arr2):
    i = 0 # point first index of arr1 
    j = 0 # point second index of arr2
    k = 0 # insert element in arr3 from arr2, arr1
    n = len(arr1)
    m = len(arr2)
    size = m * n
    arr3 = [0] * (n + m)
    
    while i < n and j < m:
        if arr1[i] < arr2[j]:
            arr3[k] = arr1[i]
            k = k + 1
            i = i + 1
            
        else:
            arr3[k] = arr2[j]
            k = k + 1
            j = j + 1
            
    # remaining element
    while i < n:
        arr3[k] = arr1[i]
        i += 1
        k += 1
    while j < m:
        arr3[k] = arr2[j]
        j += 1
        k += 1
        
    return arr3

arr1 = [1,4,6,8]
arr2 = [2,3,7,9]
print(mergeTwoSorted(arr1,arr2))
            
        
    
    
    


