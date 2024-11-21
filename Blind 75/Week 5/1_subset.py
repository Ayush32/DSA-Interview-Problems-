'''
Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]] 
'''
import pytest
def subset(index,input,ans,current_subset):
    if index == len(input):
        ans.append(list(current_subset))
        return
    
    # pick
    current_subset.append(input[index])
    subset(index + 1,input,ans,current_subset)
    # not pick
    current_subset.pop()
    subset(index+1,input,ans,current_subset)
    
    
input = [1,2,3,4]
ans = []
current_subset = []
print(subset(0,input,ans,current_subset))
print(ans)