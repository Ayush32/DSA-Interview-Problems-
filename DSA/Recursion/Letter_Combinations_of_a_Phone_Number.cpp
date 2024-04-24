#include<bits/stdc++.h>
using namespace std;


void solve(string digits,string mapping[],vector<string>&ans,int ind,string output)
{
    if(ind >= digits.size())
    {
        ans.push_back(output);
        return;
    }
    int number = digits[ind] - '0';
    string value = mapping[number];
    for(int i = 0;i < value.length();i++)
    {
        output.push_back(value[i]);
        solve(digits,mapping,ans,ind + 1,output);
        output.pop_back();
    }
}
// using queue

int main()
{
    string digits = "234";
    vector<string>ans;
    string mapping[] = {"","","abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,mapping,ans,0,"");
    for(auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}