
int mod = 1e9+7;
int recursion(int r,int c,vector<vector<int>>& obstacleGrid)
    {
        if(r == 0 && c == 0)
            return 1;
        if(r < 0 || c < 0)
            return 0;
        int up = 0;
        int left = 0;
        if(obstacleGrid[r][c] == 0) /// move on only space i.e 0 not on obstacle.
            up = recursion(r-1,c,obstacleGrid);
        if(obstacleGrid[r][c] == 0)
            left = recursion(r,c-1,obstacleGrid);

        return up + left;
    }
    int memo(int r,int c,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp)
    {

        if(r == 0 && c == 0)
            return 1;
        if(r < 0 || c < 0)
            return 0;
        if(dp[r][c] != -1){
            return dp[r][c];
        }
        int up = 0;
        int left = 0;
        if(obstacleGrid[r][c] == 0){  // move on only space i.e 0 not on obstacle.
            up = memo(r-1,c,obstacleGrid,dp);
            left = memo(r,c-1,obstacleGrid,dp);
        }

        return dp[r][c] = (up + left) % mod;
    }


int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here

    if(mat[0][0] == 1 || mat[n-1][m-1] == 1)
            return 0;
    // return recursion(n-1,m-1,mat);
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return memo(n-1,m-1,mat,dp);


        // tabulation
        vector<vector<int>>dp(row,vector<int>(col,-1));
        dp[0][0] = 1;
        for(int i = 0; i < row ;i++)
        {
            for(int j = 0;j < col;j++)
            {
                if(i == 0 && j== 0)
                    dp[i][j] = 1;
                
                else {
                    int up = 0;
                    int left = 0;
                    if(i > 0 && obstacleGrid[i][j] == 0)
                    {
                        up = dp[i-1][j];
                    }
                    if(j > 0 && obstacleGrid[i][j] == 0){
                        left = dp[i][j-1];
                    }
                    dp[i][j] = left + up;
                }
                
                    
            }
        }
        return dp[row-1][col-1];

}