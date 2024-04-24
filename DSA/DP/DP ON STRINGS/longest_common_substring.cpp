
    int lcs(string &str1, string &str2) {
        int n = str1.size();
        int m = str2.size();
        
        // return recursion(n-1,m-1,str1,sstr22);
        // memorization
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        // return memo(n,m,str1,str2,dp);//
        // tabulation
        for(int j = 0;j <= m;j++)  dp[0][j] = 0;
        for(int i = 0;i <= n;i++)  dp[i][0] = 0;
        int ans = 0;
        for(int i = 1; i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
              if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(dp[i][j],ans);
              } else {
                dp[i][j] = 0;
              }
            }
        }
        return ans;
    }

