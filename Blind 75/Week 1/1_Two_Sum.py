#Two Sum

# Approach  - 1 Using Nested Loop - T.C - O(N^2)
# Approach - 2 - Sorting + Two pointer Approach - T.C - O(NlogN)

#Approach 3 - Using Hashing - T.C - O(N) and S.C - O(N)

def twoSum(arr,target):
    pair = []
    d = dict()
    for i in range(len(arr)):
        if (target - arr[i]) in d:
            pair.append(d[target - arr[i]])
            pair.append(i)
            
        else:
            d[arr[i]] = i
            
    return pair

arr = [4,7,1,2]
4 - 0
7 - 1
1 - 2

target = 3
print(twoSum(arr,target))
            
        