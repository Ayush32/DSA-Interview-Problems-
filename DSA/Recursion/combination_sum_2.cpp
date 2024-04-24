#include<bits/stdc++.h>
using namespace std;


void findAllCombination(int ind,vector<int>&arr,int target,set<vector<int>>&ans,vector<int>&ds)
{
    // base case
    if(ind == arr.size())
    {
        if(target == 0)
        {
            ans.insert(ds);
            
        }
        return;
    }
    
    //pick
    if(arr[ind] <= target)
    {   
        ds.push_back(arr[ind]);
        findAllCombination(ind + 1,arr,target-arr[ind],ans,ds);
        ds.pop_back();

    }
    
    findAllCombination(ind + 1,arr,target,ans,ds);
    
}

int main()
{
    vector<int>arr = {10,1,2,7,6,1,5};
    int target = 8;
    
    set<vector<int>>ans;
    vector<int>ds;
    sort(arr.begin(),arr.end());
    findAllCombination(0,arr,target,ans,ds);
    int n = ans.size();
    
    for(auto it : ans)
    {   
        vector<int>v(it);
        for(int i = 0;i < v.size();i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}