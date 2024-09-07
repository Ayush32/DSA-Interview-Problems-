'''
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
frequency
 of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
# Example 1:

# Input: candidates = [2,3,6,7], target = 7
# Output: [[2,2,3],[7]]
# Explanation:
# 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
# 7 is a candidate, and 7 = 7.
# These are the onl  y two combinations.
# Example 2:

# Input: candidates = [2,3,5], target = 8
# Output: [[2,2,2,2],[2,3,3],[3,5]]
# Example 3:

# Input: candidates = [2], target = 1
# Output: []
'''
'''
The provided code snippet defines a recursive function called `combinational_sum`, 
which is designed to find all unique combinations of numbers from a given input list that sum up to a specified target value. 
Let's break down the purpose and functionality of the code step by step.

### Purpose of the Code

The main goal of the `combinational_sum` function is to explore all possible combinations of elements from the `input`
list that can add up to a specified `target`. It does this using a backtracking approach,
which allows it to explore different paths (combinations) and backtrack when necessary.

### Parameters

- `index`: This parameter keeps track of the current position in the `input` list that the function is considering.
- `input`: This is the list of numbers from which combinations are to be formed.
- `ans`: This is a list that will store all the valid combinations that sum up to the target.
- `ds`: This is a temporary list (often referred to as "current combination") that holds the current combination of numbers being explored.
- `target`: This is the remaining sum that we want to achieve with the current combination.

### Function Logic

1. **Base Case**:
   - The function first checks if the `index` has reached the length of the `input` list.
   If it has, it checks if the `target` is zero. If both conditions are satisfied, 
   it means that the current combination stored in `ds` is a valid combination that sums up to the original target, 
   and it appends a copy of `ds` to the `ans` list.

2. **Pick Element**:
   - If the current element (i.e., `input[index]`) is less than or equal to the `target`, 
   the function considers including this element in the current combination:
     - It appends the current element to `ds`.
     - It then recursively calls `combinational_sum`, updating the `target` by subtracting the current element from it.
     - After the recursive call, it performs backtracking by popping the last element from `ds`,
     - allowing the function to explore other combinations without the current element.

3. **Not Pick Element**:
   - Regardless of whether the current element is picked or not, the function also makes a recursive call to explore the next index (`index + 1`) without including the current element in the combination.

### Summary

In summary, the `combinational_sum` function is a classic example of a backtracking algorithm used to find all combinations of numbers that sum to a target value. It explores both possibilities for each element (including it in the combination or not) and uses recursion to navigate through the input list. The results are collected in the `ans` list, which will contain all valid combinations once the function completes its execution. 

This approach is particularly useful in problems related to combinations and subsets, and it can be adapted for various constraints and requirements depending on the specific problem at hand.
'''

def combinational_sum(index,input,ans,ds,target):
    # base case
    # when index is equal to size of input array length
    # if above condition is true then we will check if target == 0 the we get our first ans append ds into result array
    if index == len(input):
        if target == 0:
            ans.append(list(ds))
        return
    # pick
    # we pick element only when the target is greater than current elment 
    if input[index] <= target:
        # push into ds array
        ds.append(input[index])
        # call the recrusion and subtract current element with target to update the target
        combinational_sum(index,input,ans,ds,target-input[index])
        # backtrack pop the last inserted element
        ds.pop()
    #  not pick
    combinational_sum(index + 1,input,ans,ds,target)
    

        
    
    
    

input = [2,3,6,7]
target = 7
ans = []
ds = []
combinational_sum(0,input,ans,ds,target)
print(ans)