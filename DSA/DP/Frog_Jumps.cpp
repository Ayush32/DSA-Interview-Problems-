#include <bits/stdc++.h> 


// recursion
int recursion(int ind,vector<int>&heights)
{
        if(ind  == 0)
            return 0;

        int left = recursion(ind -1,heights) + abs(heights[ind] - heights[ind-1]);
        int right = INT_MAX;
        if(ind > 1)
              right = recursion(ind - 2,heights) + abs(heights[ind] - heights[ind -2]);

        return  min(left,right);
}

// memorization

int memo(int ind,vector<int>&heights,vector<int>&dp)
{
        if(ind  == 0)
            return 0;

        if(dp[ind] != -1){
            return dp[ind];
        }
        int left = memo(ind -1,heights,dp) + abs(heights[ind] - heights[ind-1]);
        int right = INT_MAX;
        if(ind > 1)
              right = memo(ind - 2,heights,dp) + abs(heights[ind] - heights[ind -2]);

        return  dp[ind] =  min(left,right) % 1000000007;
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
    // return recursion(n-1,heights,dp);
    return memo(n-1,heights,dp);

}