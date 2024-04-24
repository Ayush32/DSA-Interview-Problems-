#include<bits/stdc++.h>
using namespace std;

void subsetSum2(int ind, vector<int> &num, vector<int> &ans, int sum,vector<int>ds)
{
	// base case
	if(ind == num.size())
	{
		ans.push_back(sum);
		return;
	}
	//pick
	subsetSum2(ind + 1,num,ans,sum + num[ind],ds);
	// not pick
	subsetSum2(ind + 1,num,ans,sum,ds);
}

int main(){
	// Write your code here.	

	vector<int>num = {1,2,3};
    vector<vector<int>>ans;
	vector<int>ds;
	subsetSum2(0,num,ans,0,ds);
	sort(ans.begin(),ans.end());
    for(auto it : ans)
    {
        cout << it << " ";
    }
	return 0;
}