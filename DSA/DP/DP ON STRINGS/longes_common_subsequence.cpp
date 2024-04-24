class Solution {
public:
    // recursion
    int recursion(int ind1,int ind2,string s1,string s2)
    {
        if(ind1 == 0 || ind2  == 0)  // base case
            return 0;
        
        if(s1[ind1-1] == s2[ind2-1])  // match
            return 1 + recursion(ind1-1,ind2-1,s1,s2);
        
        return max(recursion(ind1,ind2-1,s1,s2),recursion(ind1-1,ind2,s1,s2));
    }
    // memorization
    int memo(int ind1,int ind2,string s1,string s2,vector<vector<int>>&dp){
        if(ind1 == 0 || ind2 == 0)  // base case
            return 0;
        if(dp[ind1][ind2] != -1)
            return dp[ind1][ind2];
        if(s1[ind1-1] == s2[ind2-1])  // match
            return 1 + memo(ind1-1,ind2-1,s1,s2,dp);
        
        return dp[ind1][ind2] =  max(memo(ind1-1,ind2,s1,s2,dp),memo(ind1,ind2-1,s1,s2,dp));
    }
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        
        return recursion(n-1,m-1,s1,s2);
        // memorization
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return memo(n,m,s1,s2,dp);
        // tabulation
        for(int j = 0;j <= m;j++)  dp[0][j] = 0;
        for(int i = 0;i <= n;i++)  dp[i][0] = 0;
        
        for(int i = 1; i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                if(s1[i-1] == s2[j-1])  // match
                    dp[i][j] =  1 + dp[i-1][j-1];
        
               else dp[i][j] =  max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};