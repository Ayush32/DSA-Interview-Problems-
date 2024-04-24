#include <bits/stdc++.h>

bool recursion(int ind, vector<int> &arr, int target) {
    'if (target == 0)
        return true;'
    if (ind == 0) // [2], target = 2, // true, but agar ye target = 3, return false;
        return arr[0] == target;

  

  bool notPick = recursion(ind - 1, arr, target);
  bool pick = false;

  if (arr[ind] <= target)
    pick = recursion(ind - 1, arr, target - arr[ind]);

  return notPick || pick;
}

bool memo(int ind, vector<int> &arr, int target,vector<vector<int>>&dp) {

    if (target == 0)
        return true;
    if (ind == 0) // [2], target = 2, // true, but agar ye target = 3, return false;
        return arr[0] == target;

    if(dp[ind][target] != -1)
        return dp[ind][target];
  

  bool notPick = memo(ind - 1, arr, target,dp);
  bool pick = false;

  if (arr[ind] <= target)
    pick = memo(ind - 1, arr, target - arr[ind],dp);

  return dp[ind][target] =  notPick | pick;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    // return recursion(n-1,arr,k);
    return memo(n-1,arr,k,dp);
}