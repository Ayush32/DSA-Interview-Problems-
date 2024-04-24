
int recursion(int ind,int k,vector<int>&height,vector<int>&dp)
{
    if(ind == 0)
        return 0;
    
    if(dp[ind] != -1){
        return dp[ind];
    }
    int minCost = INT_MAX;
    
    for(int j = 1;j <= k;j++){
        if(ind - j >= 0)
        {
            
        int kJump = recursion(ind - j,k,height,dp) + abs(height[ind] - height[ind - j]);
            minCost = min(kJump,minCost);
        }
}

    return dp[ind] = minCost;

    
}

int minimizeCost(int n, int k, vector<int> &height){
    // Write your code here.
    vector<int>dp(n+1,-1);
    return recursion(n - 1,k,height,dp);
}