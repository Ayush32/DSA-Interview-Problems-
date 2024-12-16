def leaderinArray(arr):
    
    ans = []
    ans.append(arr[len(arr)-1])
    greaterElement = float('-inf')
    for i in range(len(arr)-2,-2,-1):
        if arr[i] >= greaterElement:
           greaterElement = arr[i]
           ans.append(greaterElement)
    ans.reverse()
    return ans


arr = [16, 17, 4, 3, 5, 2]
print(leaderinArray(arr))