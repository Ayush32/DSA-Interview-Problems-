#include<bits/stdc++.h>
using namespace std;

void findAllSubset(int ind,vector<int>&arr,vector<vector<int>>&ans,vector<int>v)
{   

    if(ind == arr.size())
    {
        // ans.push_back(v);
        for(auto it : v)
        {    cout << it << " ";
             
        }
        cout << endl;
        return;
    }


    //  Pick
    v.push_back(arr[ind]);
    findAllSubset(ind + 1,arr,ans,v);
    //  Not Pick
    v.pop_back();
    findAllSubset(ind+1,arr,ans,v);


}


int main()
{
    vector<int>arr = {3,4,5};
    vector<vector<int>>ans;
    vector<int>v;
    findAllSubset(0,arr,ans,v);

    return 0;
}
