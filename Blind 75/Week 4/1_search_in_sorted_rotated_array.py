'''
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.
Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1

'''
def min_Index(arr):
    start = 0
    end = len(arr) - 1
    n = len(arr)
    while start <= end:
        mid = start + (end - start) // 2
        next = (mid + 1) % n
        prev = (mid + n - 1) % n
        
        if arr[mid] < arr[prev] and arr[mid] < arr[next]:
            return mid
        elif arr[end] >= arr[mid]:
            end = mid - 1
        elif arr[start] <= arr[mid]:
            start = mid + 1
            
    return -1

def binarySearch(arr,low,high,target):
    while low <= high:
        mid = low + (high - low) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] > target:
            high = mid - 1
        elif arr[mid] < target:
            low = mid + 1
            
    return -1
    

arr = [4,5,6,7,0,1,2]
target = 0
minElementIndex = min_Index(arr)
print(minElementIndex)
leftPart = binarySearch(arr,0,minElementIndex - 1,target)
rightPart = binarySearch(arr,minElementIndex,len(arr) - 1,target)
if leftPart != -1:
    print(leftPart)
print(rightPart)
