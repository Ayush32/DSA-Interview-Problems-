class Solution {
public:
    int recursion(int r,int c,int n,vector<vector<int>>&triangle)
    {
        if(r == n - 1)
            return triangle[n-1][c];
        // there is no boundary conditon
        // explore all path in diagonal and down direction

        int down = triangle[r][c] + recursion(r+1,c,n,triangle);
        int diagonal = triangle[r][c] + recursion(r+1,c+1,n,triangle);
        return min(down,diagonal);
    }
    int memo(int r,int c,int n,vector<vector<int>>&triangle,vector<vector<int>>&dp)
    {
        if(r == n - 1)
            return triangle[n-1][c];
        // there is no boundary conditon
        // explore all path in diagonal and down direction
        if(dp[r][c] != -1)
            return dp[r][c];
        int down = triangle[r][c] + memo(r+1,c,n,triangle,dp); // move down direction
        int diagonal = triangle[r][c] + memo(r+1,c+1,n,triangle,dp); // move diagonal direction
        return dp[r][c] = min(down,diagonal); 
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        // return recursion(0,0,n,triangle);
        vector<vector<int>>dp(n,vector<int>(n,-1));
        // return memo(0,0,n,triangle,dp);

        // tabulation
        for(int j = 0;j<n;j++)
        {
            dp[n-1][j] = triangle[n-1][j];
        }

        for(int i = n-2; i >= 0 ;i--)
        {
            for(int j =i; j >= 0;j--)
            {
                
                    int down = triangle[i][j] + dp[i+1][j]; // move down direction
                    int diagonal = triangle[i][j] + dp[i+1][j+1]; // move diagonal direction
                    dp[i][j] = min(down,diagonal);
            }
        }
        return dp[0][0];
    }
};