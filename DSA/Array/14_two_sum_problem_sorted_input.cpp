
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         Approach - 1 - Using Brute Force
            T.C - O(N^2)
            S.C - (1)
            vector<int>ans;
            int n = nums.size();
        for(int i = 0;i<n-1;i++)
        {
            for(int j = i+ 1;j<n;j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                }
            }
        }
        
        /*Approach 2 - Using Two Pointer
        T.C - O(N)
        S.C - (1)
        we initialized two variable low pointing to the first index in left and high at last index
        we check if the sum of value at left and high pointer is equal to target then we shift left to right
        high to left i.e(low++,high--)
        if sum if greater than target then, it means right pointer is at higher value so we shift high pointer to left
        if sum is smaller than target it means we get smaller value so we move low towards high
        */
            
        vector<int>ans;
        int n = nums.size();
        int  low = 0;
        int high = n -1;
        
        while(low < high)
        {
            if(nums[low] + nums[high] == target)
            {
                ans.push_back(low+1);
                ans.push_back(high+1);
                low++;
                high--;
            }
            else if(nums[low] + nums[high] > target)
            {
                high--;
            }
            else {
                low++;
            }
        }
        
        
        return ans;
        
    }
};
