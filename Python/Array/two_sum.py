'''
Intuition: Basically, in the previous approach we selected one element and then searched for the other one using a loop.
     Here instead of using a loop,
     we will use the HashMap to check if the other element i.e. target-(selected element) exists. 
     Thus we can trim down the time complexity of the problem.

And for the second variant, we will store the element along will its index in the HashMap. 
Thus we can easily retrieve the index of the other element i.e. target-(selected element) without iterating the array.*/
    // Write your code here.
'''

def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = dict()
        ans = []
        for i in range(len(nums)):
            
            if target-nums[i] in d:
                
                ans.append(d[target-nums[i]])
                ans.append(i)
            
            d[nums[i]] = i
        
        return ans