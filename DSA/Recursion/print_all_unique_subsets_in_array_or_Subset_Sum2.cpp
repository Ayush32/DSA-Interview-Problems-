#include<bits/stdc++.h>
using namespace std;

void findUniqueSubset(int ind,vector<int>arr, set<vector<int>>&st,vector<int>output)
{
    if(ind == arr.size())
    {
        sort(output.begin(),output.end());
        st.insert({output});
        return;

    }

    // pick
    output.push_back(arr[ind]);
    findUniqueSubset(ind + 1,arr,st,output);
    // not pick
    output.pop_back();
    findUniqueSubset(ind+1,arr,st,output);
}

int main()
{
    vector<int>input = {1,1,2};
    set<vector<int>>st;
    // string op = "";
    vector<int>op;
    findUniqueSubset(0,input,st,op);

    for(auto it : st)
    {
        vector<int>v(it);
        for(auto i : v)
            {
                cout << i << " ";
            }
        cout << endl;
    }
    return 0;

}