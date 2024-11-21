
'''
# Approach 1 - Using Nested loop compare ith element of outer loop to every jth element of inner loop if it match with ith element return true that array contains dulplicate
# T.C - O(N^2)
S.C - O(1)
'''
def contains_Duplicate_approach_first(nums):
    for i in range(len(nums)):
        for j in range(i + 1,len(nums)):
            if nums[i] == nums[j]:
                return True
            
    return False

'''T.C - O(Nlogn)
S.C - O(1)
'''
def contains_Duplicate_approach_second(nums):
    arr = sorted(nums,reverse=False)
    for i in range(0,len(arr)-1):
            if arr[i] == arr[i + 1]:
                return True
            
    return False

'''
T.C - O(N)
S.C - O(N)
'''


def contains_Duplicate_approach_third(nums):
    s = set()
    for i in range(len(nums)):
        s.add(nums[i])
            
    return len(s) != len(nums)

def contains_Duplicate_approach_optimize(nums):
    slow = nums[0]
    fast = nums[0]
    
    while fast:
        slow = nums[nums[0]]
        fast = nums[nums[nums[0]]]
    
        if slow == fast:
            return True
    return False
    # return len(s) != len(nums)

nums = [5,2,3,1,4,3]
print(contains_Duplicate_approach_first(nums))
print(contains_Duplicate_approach_second(nums))
print(contains_Duplicate_approach_third(nums))
print(contains_Duplicate_approach_optimize(nums))