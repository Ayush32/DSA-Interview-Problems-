class Solution {
public:
    
    int recursion(int ind,vector<int>&coins,int amount)
    {
        if(ind  == 0){
            if(amount % coins[0] == 0)
                return amount / coins[0];
            else
                return 1e9;
        }
        int notPick = 0 + recursion(ind-1,coins,amount);
        int pick = 1e9;
        if(coins[ind] <= amount)
            pick = 1 +  recursion(ind,coins,amount-coins[ind]);
        return min(notPick,pick);
    }
    // memorizATION
     int memo(int ind,vector<int>&coins,int amount,vector<vector<int>>&dp)
    {
        if(ind == 0)
        {
            if(amount % coins[0] == 0)
                return amount / coins[ind];
            else
                return 1e9;
        }
        if(dp[ind][amount] != -1){
            return dp[ind][amount];
        }
        int notTake = memo(ind-1,coins,amount,dp);
        int take = 1e9;
        
        if(amount >= coins[ind]){
            take = 1 + memo(ind,coins,amount-coins[ind],dp);
        }
        return dp[ind][amount] = min(take,notTake);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        // int ans = return recursion(n-1,coins,amount);
//         if(ans >= 1e9)
//             return -1;
//         return ans;
        
        // memorization
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans = memo(n-1,coins,amount,dp);
        if(ans >= 1e9)
            return -1;
        return ans;
    }
};