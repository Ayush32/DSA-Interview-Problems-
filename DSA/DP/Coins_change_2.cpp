class Solution {
public:
    // int recursion(int ind,vector<int>&coins,int amount)
    // {
    //     if(ind == 0)
    //     {
    //         if(amount % coins[0] == 0)
    //             return 1;
    //         else
    //             return 0;
    //     }
    //     int notPick = recursion(ind - 1,coins,amount);
    //     int pick = 0;
    //     if(coins[ind] <= amount){
    //         pick = recursion(ind,coins,amount-coins[ind]);
    //     }
    //     return pick + notPick;
    // }
    // // memorization
    // int memo(int ind,vector<int>&coins,int amount,vector<vector<int>>&dp)
    // {
    //     if(ind == 0)
    //     {
    //         if(amount % coins[0] == 0)
    //             return 1;
    //         else
    //             return 0;
    //     }
    //     if(dp[ind][amount] != -1)
    //         return dp[ind][amount];
    //     int notPick = memo(ind - 1,coins,amount,dp);
    //     int pick = 0;
    //     if(coins[ind] <= amount){
    //         pick = memo(ind,coins,amount-coins[ind],dp);
    //     }
    //     return dp[ind][amount] =  pick + notPick;
    // }
    int change(int amount, vector<int>& coins) {
        // int n = coins.size();
        // return recursion(n-1, coins,amount);
        //memo
        
        // vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        
        // return memo(n-1,coins,amount,dp);
        
        // tabulation
        
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, 0));
        for (int t=0; t<=amount; t++) {
            if (t % coins[0] == 0) dp[0][t] = 1;
        }
        for (int ind=1; ind<n; ind++) {
            for (int target=0; target<=amount; target++) {
                int notTake = dp[ind-1][target];
                int take = 0;
                if (target >= coins[ind]) take = dp[ind][target-coins[ind]];
                dp[ind][target] = notTake + take;
            }
        }
        return dp[n-1][amount];
            
    }
};