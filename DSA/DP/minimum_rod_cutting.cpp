#include <bits/stdc++.h>

int recursion(int ind,int length,vector<int>&prices)
{
	if(ind == 0) // base case
		return length * prices[0];
	
	int notPick = recursion(ind-1,length,prices);
	int pick = INT_MIN;
	int rodLength = ind + 1;
	if(rodLength <= length)
		pick = prices[ind] + recursion(ind,length-rodLength,prices);
	
	return max(pick,notPick);
}

int memo(int ind,int length,vector<int>&prices,vector<vector<int>>&dp)
{
	if(ind == 0) // base case
		return length * prices[0];
	
	if(dp[ind][length] != -1)
		return dp[ind][length];
	int notPick = memo(ind-1,length,prices,dp);
	int pick = INT_MIN;
	int rodLength = ind + 1;
	if(rodLength <= length)
		pick = prices[ind] + memo(ind,length-rodLength,prices,dp);
	
	return dp[ind][length] =  max(pick,notPick);
}
int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	int length = n;
	int size = price.size();
	// return recursion(size - 1,length,price);
	// memorization
	// vector<vector<int>>dp(size,vector<int>(length+1,-1));
	// return memo(size - 1,length,price,dp);

	// Tabulation
	vector<vector<int>>dp(length,vector<int>(length+1,0));

	for(int L = 0;L <= length;L++)
	{
		dp[0][L] = L * price[0];
	}

	for(int ind = 1;ind<length;ind++)
	{
		for(int L=0;L<=length;L++)
		{
			int notPick =0 +  dp[ind-1][L];
			int pick = INT_MIN;
			int rodLength = ind + 1;
            if (rodLength <= length) {
                pick = price[ind] + dp[ind][L - rodLength];
            }
            dp[ind][L] = max(pick,notPick);
		}
	}
	return dp[length-1][length];



}
