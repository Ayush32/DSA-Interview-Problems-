def longestSubarraySumKBruteForce(arr,k):
    # left = 0
    # right = 0
    n = len(arr)
    firstIndex = 0
    lastIndex = 0
    maxSubarraySum = 0
    for left in range(n):
        sum = 0
        for right in range(left,n):
            sum = arr[right] + sum
            
            if sum == k:
                maxSubarraySum = max(maxSubarraySum,right - left + 1)
                firstIndex = left
                lastIndex = right
                
    
    print(arr[firstIndex : lastIndex + 1])
    print(maxSubarraySum)


# it only work for positive 

def longestSubarraySumK(arr,k):
    left = 0
    right = 0
    n = len(arr)
    firstIndex = 0
    lastIndex = 0
    maxSubarraySum = 0
    sum = 0
    while right < n:
        sum = arr[right] + sum
        
              
        if sum == k:
            maxSubarraySum = max(maxSubarraySum,right - left + 1)
                
        right = right + 1
    # print(arr[firstIndex : lastIndex + 1])
    return maxSubarraySum
    

arr = [5, 8, 14, 2, 4, 12]
k = 20
# longestSubarraySumKBruteForce(arr,k)
print(longestSubarraySumK(arr,k))


def longestSubarraySumk(arr,k):
    hashmap = {}
    sum = 0
    maxLength = 0
    
    for i in range(len(arr)):
        
        sum += arr[i]
        
        if sum == k:
            maxLength = i + 1
            
        if sum - k in hashmap:
            maxLength = max(maxLength,i - hashmap[sum - k])
            
        else:
            hashmap[sum] = i
            
            
    return maxLength


arr = [15, -2, 2, -8, 1, 7, 10, 23]
k = 0
print(longestSubarraySumk(arr,k))