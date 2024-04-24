class Solution {

public: 
    // recursion
    bool subsetSumEqualToK(int ind,vector<int>&nums,int target)
    {
        if(target == 0)
            return true;
        
        if(ind  == 0)
            return nums[0] == target;

        bool notPick = subsetSumEqualToK(ind-1,nums,target);
        bool pick = false;

        if(nums[ind] <= target)
            pick = subsetSumEqualToK(ind-1,nums,target-nums[ind]);

        return pick | notPick;
    }
    // memorization
     bool subsetSumEqualToKMemo(int ind,vector<int>&nums,int target,vector<vector<int>>&dp)
    {
        if(target == 0)
            return true;
        
        if(ind  == 0)
            return nums[0] == target;
        if(dp[ind][target] != -1)
            return dp[ind][target];
        bool notPick = subsetSumEqualToKMemo(ind-1,nums,target,dp);
        bool pick = false;

        if(nums[ind] <= target)
            pick = subsetSumEqualToKMemo(ind-1,nums,target-nums[ind],dp);

        return dp[ind][target] =  pick | notPick;
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(auto it : nums)
            totalSum += it;
        if(totalSum % 2 != 0)
            return false;
        int target = totalSum / 2;
        // recursion
        // return subsetSumEqualToK(nums.size()-1,nums,totalSum/2);
        // memorization
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return subsetSumEqualToKMemo(n-1,nums,target,dp);

    }
};