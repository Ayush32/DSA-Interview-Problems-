class Solution {
public:

    int pathSum(int r,int c,vector<vector<int>>&grid)
    {
        if(r == 0 && c == 0)
            return grid[r][c];
        
        if(r < 0 || c < 0)
            return 1e9;
        
        int up = grid[r][c] + pathSum(r-1,c,grid);
        int left = grid[r][c] + pathSum(r,c-1,grid);
        return min(up,left);
    }

    return pathSum(row-1,col-1,grid);

    int memo(int r,int c,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        if(r == 0 && c == 0)
            return grid[r][c];
        
        if(r < 0 || c < 0)
            return 1e9;
        if(dp[r][c] != -1){
            return dp[r][c];
        }
        int up = grid[r][c] + memo(r-1,c,grid,dp);
        int left = grid[r][c] + memo(r,c-1,grid,dp);

        return dp[r][c] =  min(up,left);

    }
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        // recursion
        // return pathSum(row-1,col-1,grid);

        // memorization
        vector<vector<int>>dp(row,vector<int>(col,-1));
        // return memo(row-1,col-1,grid,dp);

        //  Tabullation

        // dp[0][0] = grid[row][col];

        for(int i = 0; i < row;i++)
        {
            for(int j = 0;j<col;j++)
            {
                if(i == 0 && j == 0)
                    dp[i][j] = grid[0][0];
                
             else {   
                int left = INT_MAX;
                int up = INT_MAX;

                if(i > 0)
                    up = dp[i-1][j] + grid[i][j];
                if(j > 0)
                    left = dp[i][j-1] + grid[i][j];

                dp[i][j] = min(left,up);

                }
            }
        }
        return dp[row-1][col-1];

    }
};