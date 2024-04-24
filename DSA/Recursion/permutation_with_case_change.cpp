#include<bits/stdc++.h>

using namespace std;


void permutationWithCaseChange(int ind,string input,string output,vector<string>&ans)
{
    /// base case
    if(ind == input.size())
    {
        ans.push_back(output);
        return;
    }

    // lowercase
    output.push_back(input[ind]);
    permutationWithCaseChange(ind + 1,input,output,ans);
    // uppercase
    output.pop_back();
    output.push_back(char(input[ind] - 32));
    permutationWithCaseChange(ind + 1,input,output,ans);

}


int main()
{
    string input = "abc";
    vector<string>ans;
    string output = "";
    // output.push_back(input[0]);
    // output.pop_back();
    permutationWithCaseChange(0,input,output,ans);

    for(auto it : ans)
    {
        cout << it;
        cout << endl;
    }
    return 0;
}