#include<bits/stdc++.h>
using namespace std;

void findUniqueSubset(int ind,string input, set<vector<string>>&st,string output)
{
    if(ind == input.size())
    {
        st.insert({output});
        return;

    }

    // pick
    output.push_back(input[ind]);
    findUniqueSubset(ind + 1,input,st,output);
    // not pick
    output.pop_back();
    findUniqueSubset(ind+1,input,st,output);
}

int main()
{
    string input = "bbbab";
    set<vector<string>>st;
    string op = "";
    findUniqueSubset(0,input,st,op);

    for(auto it : st)
    {
        vector<string>v(it);
        for(auto i : v)
            {
                cout << i << " ";
            }
        cout << endl;
    }
    return 0;

}