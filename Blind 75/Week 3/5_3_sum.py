'''
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 
'''

def three_sum(nums):
    hashset = set()
    n = len(nums)
    for i in range(n-2):
        ans = []
        for j in range(i + 1,n-1):
            for k in range(j + 1,n):
                if nums[i] + nums[j] + nums[k] == 0:
                    hashset.add(tuple(sorted([nums[i],nums[j],nums[k]])))
    ans = []                
    for triplet in hashset:
        ans.append(triplet)
    return ans

nums = [-1,0,1,2,-1,-4]
print(three_sum(nums))

#Approach 2 - 3 sum
# T.C - O(N^2logn)
# S.C - O(N) no of triplets

def three_sum_two_pointer(nums):
    hashset = set()
    n = len(nums)
    nums.sort()
    ans  = []
    for i in range(n-2):
        low = i + 1
        high = len(nums) - 1
        
        while low < high:
            
            curr_sum = nums[i] + nums[low] + nums[high]
            if curr_sum == 0:
                # add triplet in the form of tuple later convert them into list
                hashset.add((nums[i],nums[low],nums[high]))
                low = low + 1
                high = high - 1
            elif curr_sum > 0:
                high = high - 1
            else:
                low  = low + 1
        
    for triplet in hashset:
        ans.append(list(triplet))
        
    return ans


nums = [-1,0,1,2,-1,-4]
print(three_sum_two_pointer(nums))

#approach 3 - using sort + two pointer appraoch but without space
# T.C - O(N)

def three_sum_two_optimize(nums):
    n = len(nums)
    nums.sort()
    ans  = []
    for i in range(n):
        # This condition skips duplicate elements to avoid redundant triplets
        if i != 0 and nums[i] == nums[i - 1]:
            continue
        
        low = i + 1
        high = len(nums) - 1
        
        while low < high:
            curr_sum = nums[i] + nums[low] + nums[high]
            if curr_sum == 0:
                ans.append([nums[i],nums[low],nums[high]])
                low = low + 1
                high = high - 1

                # These loops skip duplicate elements to ensure that each triplet is unique.
                while low < high and nums[low] == nums[low - 1]:
                    low = low + 1
                while low < high and nums[high] == nums[high + 1]:
                    high = high - 1
            elif curr_sum > 0:
                high = high - 1
            else:
                low = low + 1
                
            
    return ans

nums = [-1,0,1,2,-1,-4]
print(three_sum_two_optimize(nums))

#     hashset.add([nums[i],nums[j],nums[k]])
# TypeError: unhashable type: 'list'
