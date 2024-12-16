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
        
        while left <= right and sum > k:
            sum -= arr[left]
            left = left + 1
        
        if sum == k:
            maxSubarraySum = max(maxSubarraySum,right - left + 1)
                
        right = right + 1
    # print(arr[firstIndex : lastIndex + 1])
    return maxSubarraySum
    

arr = [5, 8, 14, 2, 4, 12]
k = 20
# longestSubarraySumKBruteForce(arr,k)
print(longestSubarraySumK(arr,k))



'''
Step-by-step approach:

Use a hashmap (or dictionary) to store the first occurrence of each prefix sum.
Iterate over each element of array:
Check if the current prefix sum has been seen before, it means a subarray with zero sum exists between the previous index (where this prefix sum was first seen)
and the current index.
Keep track of the maximum length of any zero-sum subarray found.
'''

def longestSubarraySum0(arr):
    hashmap = {}
    sum = 0
    maxLength = 0
    
    for i in range(len(arr)):
        
        sum += arr[i]
        
        if sum == 0:
            maxLength = i + 1
            
        if sum in hashmap:
            maxLength = max(maxLength,i - hashmap[sum])
            
        else:
            hashmap[sum] = i
            
            
    return maxLength


arr = [15, -2, 2, -8, 1, 7, 10, 23]
print(longestSubarraySum0(arr))