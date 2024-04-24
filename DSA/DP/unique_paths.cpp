class Solution {

public:
    // T.C - O(2^N*M) // some overlapping subproblem
    // S.C - O(path length) = O(m-1)+ (n-1))
    int recursion(int i,int j){
        if(i == 0 && j == 0) // when we reach the destination
            return 1;
        if(i < 0 || j < 0) // boundary condition when the index is negative
            return 0;
        int left = recursion(i,j-1);
        int up =  recursion(i-1,j);

        return up + left; // total ways to reach the destination
    }
    // T.C - O(N*M)
    // S.C - O(n-1) + (m-1)) + O(N*M)
    //       recursion stack space
    int countPathsMemo(int i,int j,vector<vector<int>>&dp){
        if(i == 0 && j == 0) // when we reach the destination
            return 1;
        if(i < 0 || j < 0) // boundary condition when the index is negative
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        int left = countPathsMemo(i,j-1,dp);
        int up =  countPathsMemo(i-1,j,dp);

        return dp[i][j] = up + left; // total ways to reach the destination
    }

    int uniquePaths(int m, int n) {
    
        // return recursion(m-1,n-1);
        // vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        // return countPathsMemo(m-1,n-1,dp);

        // Tabulation
        vector<vector<int>>dp(m,vector<int>(n,-1));
        dp[0][0] = 1; // base case

        for(int i = 0;i < m;i++)
        {
            for(int j = 0;j< n;j++)

            {
                if(i == 0 && j == 0) // when we reach the destination
                    dp[i][j] = 1;

                else {
                    int  up = 0;
                    int left = 0;
                    if(i > 0)
                        up = dp[i-1][j];
                    if(j > 0)
                        left = dp[i][j-1];
                    dp[i][j] = left + up;
                }
            }
        }

        return dp[m-1][n-1];
    }
};