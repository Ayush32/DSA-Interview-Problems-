#include <bits/stdc++.h>
long recur(int ind,int buy, long *values,int n)
{
    if(ind == n)
        return 0;
    long profit = 0;
    if(buy)
    {
        profit = max(-values[ind] + recur(ind+1,0,values,n),0 + recur(ind+1,1,values,n));
    }
    else {
        profit = max(values[ind] + recur(ind+1,1,values,n),0 + recur(ind+1,0,values,n));
    }
    return profit;
}

long memo(int ind,int buy, long *values,int n,vector<vector<long>>&dp)
{
    if(ind == n)
        return 0;
    
    if(dp[ind][buy] != -1)
        return dp[ind][buy];
    long profit = 0;
    if(buy)
    {
        profit = max(-values[ind] + memo(ind+1,0,values,n,dp),0 + memo(ind+1,1,values,n,dp));
    }
    else {
        profit = max(values[ind] + memo(ind+1,1,values,n,dp),0 + memo(ind+1,0,values,n,dp));
    }
    return dp[ind][buy] = profit;
    
}

long tabulation(long *values,int n)
{

    vector<vector<long>>dp(n+1,vector<long>(2,0));
    dp[n][0] = dp[n][1] = 0;
    long profit = 0;
    for(int ind = n -1; ind >= 0 ;ind--)
    {
        for(int buy = 0;buy <=1;buy++)
        {
          if (buy) {
            profit = max(-values[ind] + dp[ind + 1][0], 0 + dp[ind + 1][1]);
          } else {
            profit = max(values[ind] + dp[ind + 1][1], 0 + dp[ind + 1][0]);
          }
          dp[ind][buy] = profit;
        }
        
    }
    return dp[0][1];
    
}


long getMaximumProfit(long *values, int n)
{
    // Write your code here
    // recursion
    return recur(0,1,values,n);
    // memorization
    vector<vector<long>>dp(n,vector<long>(2,-1));
    return memo(0,1,values,n,dp);
    // tabulation
    return tabulation(values,n);

}s