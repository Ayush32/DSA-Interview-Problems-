'''
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
'''

def permutation(input,ds,freq,ans):
    if len(ds) == len(input):
        ans.append(list(ds))
        return
        
    
    for i in range(len(input)):
        if not freq[i]:
            ds.append(input[i])
            freq[i] = 1
            # pick
            permutation(input,ds,freq,ans)
            freq[i] = 0
            # not pick
            ds.pop()
            
        
input = [1,2,3]
ds = []
ans = []
freq = [0] * len(input)
permutation(input,ds,freq,ans)
print(ans)

