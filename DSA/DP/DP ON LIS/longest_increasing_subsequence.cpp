class Solution {
public:
    
    int recur(int ind,int prev_ind,int n,vector<int>&nums)
    {
        if(ind == n)  // base case
            return 0;
        int len = 0 + recur(ind+1,prev_ind,n,nums);
        if(prev_ind == -1 || nums[ind] > nums[prev_ind])
            len = max(len,1+recur(ind+1,ind,n,nums));
        
        return len;
    }
    
    int memo(int ind,int prev_ind,int n,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(ind == n)  // base case
            return 0;
        if(dp[ind][prev_ind+1] != -1)
                return dp[ind][prev_ind+1];
        int len = 0 + memo(ind+1,prev_ind,n,nums,dp);
        if(prev_ind == -1 || nums[ind] > nums[prev_ind])
            len = max(len,1+memo(ind+1,ind,n,nums,dp));
        
        return dp[ind][prev_ind+1] = len;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // return recur(0,-1,nums.size(),nums);
        // memo
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return memo(0,-1,n,nums,dp);
    }
};