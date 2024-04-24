#include <bits/stdc++.h> 

// int recursion(int ind,vector<int> weight, vector<int> value, int maxWeight)
// {
// 	if(ind == 0)  // base case
// 	{
// 		if(weight[0] <= maxWeight)  // if weight[] = [2], value[] = 4, maxWeight = 2 or 3 
//  			return value[0];
// 		else
// 			return 0; // if weight item is greater than maxWeight
// 	}
// 		int notPick = recursion(ind-1,weight,value,maxWeight);
// 		int pick = INT_MIN;
// 		if(weight[ind] <= maxWeight)
// 			pick = value[ind] +  recursion(ind-1,weight,value,maxWeight-weight[ind]);
		
// 		return max(pick,notPick);
// }

int memo(int ind,vector<int> weight, vector<int> value, int maxWeight,vector<vector<int>>&dp)
{
	if(ind == 0)  // base case
	{
		if(weight[0] <= maxWeight)  // if weight[] = [2], value[] = 4, maxWeight = 2 or 3 
 			return value[0];
		else
			return 0; // if weight item is greater than maxWeight
	}
	if(dp[ind][maxWeight] != -1)
		return dp[ind][maxWeight];
	int notPick = memo(ind-1,weight,value,maxWeight,dp);
	int pick = INT_MIN;
	if(weight[ind] <= maxWeight)
		pick = value[ind] +  memo(ind-1,weight,value,maxWeight-weight[ind],dp);
		
	return dp[ind][maxWeight] =  max(pick,notPick);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	return recursion(n-1,weight,value,maxWeight);
	// memorization

	vector<vector<int>>dp(n+1,vector<int>(maxWeight+1,-1));
	return memo(n-1,weight,value,maxWeight,dp);

	// tabulation
	vector<vector<int>>dp(n+1,vector<int>(maxWeight+1,0));
	for(int w = weight[0]; w < maxWeight;w++)
	{
		dp[0][w] = value[0];
	}
	for(int ind = 1;ind <= n-1;ind++)
	{
		for(int w = 1;w < maxWeight;w++)
		{
			int notPick = dp[ind-1][w];
			int pick = INT_MIN;
			if(weight[ind] <= maxWeight)
				pick = value[ind] + dp[ind-1][w - weight[ind]];
			dp[ind][w] = max(pick,notPick);
		}
	}
	return dp[n-1][maxWeight];
}