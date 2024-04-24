#include <bits/stdc++.h> 

// recursion
int recursion(int ind, vector<int>&nums)
{
    if(ind == 0)
        return nums[ind];

    
    if(ind < 0)
        return 0;

    int pick = recursion(ind - 2,nums) + nums[ind];
    int notPick = recursion(ind - 1,nums);

    return dp[ind] = max(pick,notPick);

}
// memorization
int memo(int ind, vector<int>&nums,vector<int>&dp)
{
    if(ind == 0)
        return nums[ind];

    
    if(ind < 0)
        return 0;

    if(dp[ind] != -1){
        return dp[ind];
    }
    int pick = memo(ind - 2,nums,dp) + nums[ind];
    int notPick = memo(ind - 1,nums,dp);

    return dp[ind] = max(pick,notPick);

}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    // int sum = 0;
    vector<int>dp(n+1,-1);
    return recursion(n-1,nums);//
    return memo(n-1,nums,dp);
}