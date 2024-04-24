#include<bits/stdc++.h>
using namespace std;

void generateAllBalancedParenthesis(int open,int close,string output,vector<string>&ans)
{
    if(open == 0 && close == 0)
    {
        ans.push_back(output);
        return;
    }
    if(open != 0)
    {
        output.push_back('(');
        generateAllBalancedParenthesis(open-1,close,output,ans);
        output.pop_back();
    }
    if(close > open)
    {
        
        output.push_back(')');
        generateAllBalancedParenthesis(open,close- 1,output,ans);
        
    }

}

int main()
{
    int n = 2;
    vector<string>ans;
    string output = "";
    generateAllBalancedParenthesis(n,n,output,ans);
    for(auto it : ans)
    {
        cout << it << " ";
    }
    return 0;

}