int recur(int row,int col,vector<vector<int>>& mat,vector<vector<int>>&dp)
    {
        // boundary condition for left Diag and right diag
        if(col >= mat.size() || col < 0)
            return 1e9;
        
        // base case
        if(row >= mat.size() ){
            return 0;
        }
        if(dp[row][col] != INT_MAX){
            return dp[row][col];
        }
        
        // moving in up direction
        int up = mat[row][col] + recur(row+1,col,mat,dp);
        // moving in left Diaginal
        int leftDiagonal = mat[row][col] + recur(row+1,col-1,mat,dp);
        // moving in right Diagonal
        int rightDiagonal = mat[row][col] + recur(row+1,col+1,mat,dp);

        return dp[row][col] = min(up,min(leftDiagonal,rightDiagonal));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // int m = matrix[0].size();
        int mini = INT_MAX;
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        for(int j = 0;j<n;j++)
        {
            mini = min(mini,recur(0,j,matrix,dp));
        }
        return mini;
    }
};