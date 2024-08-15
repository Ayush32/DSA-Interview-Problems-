'''
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 
Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
'''                 

# Approach 1 - Using nested loop compare ith element with every jth element and count the freq, chechk frequncy after the inner loop is terminated whether the freq is greater than n/2 times or not
# if if ti

#approach 2 

def majority_element(nums):
    freq = {}
    for i in range(len(nums)):
        if nums[i] in freq:
            freq[nums[i]] = freq[nums[i]] + 1
        else:
            freq[nums[i]] = 1

    majortyElement = 0
    
    for key,value in freq.items():
        if value > len(nums)/2:
            majority_element = key
        
    return majority_element

nums = [3,5,3,2,3,4,3,3]
print(majority_element(nums))

# approach 3 - Using moore voting alogrithm

def majority_element_better_approach(nums):
    count = 0
    majority_element = 0

    for i in range(len(nums)):
        if count == 0:
            majority_element = nums[i]
        if majority_element == nums[i]:
            count = count + 1
        else:
            count = count - 1
    count = 0
    
    for i in range(len(nums)):
        if majority_element == nums[i]:
            count += 1
    if count > len(nums)/2:
        return majority_element

    return -1

nums = [3,5,2,3,4,3]
print(majority_element_better_approach(nums))
