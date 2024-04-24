#include <bits/stdc++.h> 

int memo(int ind,vector<int>&house,vector<long long int>&dp)
{
        if(ind == 0)
            return house[ind];

        if(ind < 0)
            return 0;
        if(dp[ind] != -1){
            return dp[ind];
        }
      long long int pick =   house[ind] + recursion(ind - 2,house,dp);
      long long  int notPick = recursion(ind-1,house,dp) + 0;

    return dp[ind] =  max(pick,notPick);
}
long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    int n = valueInHouse.size();
    if(n == 1)
        return valueInHouse[0];
    
    vector<long long int>dp1(n,-1);
    int a  = memo(n,temp1,dp1);

    return a;

}