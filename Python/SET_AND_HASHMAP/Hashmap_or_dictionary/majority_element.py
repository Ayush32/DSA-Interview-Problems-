def majority_element(arr):
    mp = dict()
    majorityElement = 0
    size = len(arr) // 2
    for i in range(0,len(arr)):
        if arr[i] in mp:
            mp[arr[i]] = mp[arr[i]] + 1
        else:
            mp[arr[i]] = 1

    for key,value in mp.items():
        if value > size:
            majorityElement = key
    
    return majorityElement

arr = [5,5,5,5,5,6,1,2,5,6,3,5,5,5,5,5,6,1,5]
print(majority_element(arr))
    