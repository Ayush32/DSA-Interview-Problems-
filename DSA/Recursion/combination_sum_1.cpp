#include<bits/stdc++.h>
using namespace std;


void findAllCombination(int ind,vector<int>&arr,int target,vector<vector<int>>&ans,vector<int>&ds)
{
    // base case
    if(ind == arr.size())
    {
        if(target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    //pick
    if(arr[ind] <= target)
    {   
        ds.push_back(arr[ind]);
        findAllCombination(ind,arr,target-arr[ind],ans,ds);
        ds.pop_back();
    }
    findAllCombination(ind + 1,arr,target,ans,ds);
    
}

int main()
{
    vector<int>arr = {2,4,6,8};
    int target = 8;
    vector<vector<int>>ans;
    vector<int>ds;
    
    findAllCombination(0,arr,target,ans,ds);
    int n = ans.size();
    int m = ans[0].size();
    for(int i = 0;i < n;i++)
    {   
        for(int j =0 ; j < m ;j++)
        {
            cout<< ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}