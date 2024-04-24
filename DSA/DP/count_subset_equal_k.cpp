int mod = (int)(1e9 + 7);


    int countSubset(int ind,vector<int>&nums,int target)
    {
        if(target == 0)
            return 1;
        
        if(ind == 0)
            return nums[0] == target;

        int notPick = countSubset(ind-1,nums,target);
        int pick = 0;
        if(nums[ind] <= target)
            pick = countSubset(ind-1,nums,target-nums[ind]);
        return (pick + notPick) % mod;
    }

     int countSubsetMemo(int ind,vector<int>&nums,int target,vector<vector<int>>&dp)
    {
        if(target == 0)
            return 1;
        
        if(ind == 0)
            return nums[0] == target;
        if(dp[ind][target] != -1)
            return dp[ind][target];
        int notPick = countSubsetMemo(ind-1,nums,target,dp);
        int pick = 0;
        if(nums[ind] <= target)
            pick = countSubsetMemo(ind-1,nums,target-nums[ind],dp);
        return dp[ind][target] = (pick + notPick) % mod;
    }

    int findWays(vector<int>& nums,int k) {
        int n = nums.size();
        // recursion
        return countSubset(nums.size()-1,nums,k);

        // memorization
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return countSubsetMemo(n-1,nums,k,dp);

    }