#include<bits/stdc++.h>
using namespace std;

void subsetSum(int ind, vector<int> &num, vector<int> &ans, int sum)
{
	// base case
	if(ind == num.size())
	{
		ans.push_back(sum);
		return;
	}
	//pick
	subsetSum(ind + 1,num,ans,sum + num[ind]);
	// not pick
	subsetSum(ind + 1,num,ans,sum);
}

int main(){
	// Write your code here.	

	vector<int>num = {1,2,3};
    vector<int>ans;
	subsetSum(0,num,ans,0);
	sort(ans.begin(),ans.end());
    for(auto it : ans)
    {
        cout << it << " ";
    }
	return 0;
}