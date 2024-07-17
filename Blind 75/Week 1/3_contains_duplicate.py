''' Approach - 1 - Using Nested Loop 
    Approach - 2 - Using Hashing
'''

def containsDuplicate(arr):
    d = dict()
    for i in range(len(arr)):
        if arr[i] in d:
            d[arr[i]] += 1
        else:
            d[arr[i]] = 1
    
    duplicateNumber = 0
    for key,values in d.items():
        if values >= 2:
            duplicateNumber = values
    
    return duplicateNumber

arr = [1,2,3,4]
print(containsDuplicate(arr))
            
    