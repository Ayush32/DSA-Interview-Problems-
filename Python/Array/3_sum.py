class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans = []
        nums.sort()
        n = len(nums)
        for i in range(0,n):
            
            if i != 0 and nums[i] == nums[i - 1]:   # skip duplicates
                continue
                
            low = i + 1
            high = n - 1
            
            while low < high:
                
                curr_sum = nums[i] + nums[low] + nums[high]
                
                if curr_sum == 0:
                    ans.append([nums[i],nums[low],nums[high]])
                    low = low + 1
                    high = high - 1
                    
                
                    while low < high and nums[low] == nums[low - 1]:  # skip duplicates
                        low = low + 1
                    
                    while low < high and nums[high] == nums[high + 1]:  # skip duplicates
                        high = high - 1
            
                
                elif curr_sum < 0:
                    low = low + 1
                
                elif curr_sum > 0:
                    high = high  -1
                
        return ans
        