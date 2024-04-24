#include <bits/stdc++.h> 

int mod = 1e9+7;
int countDistinctWays(int nStairs) {
     Write your code here.]

    Recursion - Time Limit Exceed
    if(nStairs <= 1)
        return 1;
    else
       return  countDistinctWays(nStairs - 1)+ countDistinctWays(nStairs - 2); 

    // Memorization
    // T.C - O(N)
    // S.C - O(N)
    vector<long long>dp(nStairs+1);
    dp[0] = 1;
    dp[1] = 1;
 
    for(int i = 2;i<=nStairs;i++){
        dp[i] = (dp[i-1] + dp[i-2]) %  mod;
    }
    return dp[nStairs];
    
}

Pribl