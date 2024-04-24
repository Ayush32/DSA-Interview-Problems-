#include<bits/stdc++.h>
using namespace std;

void letterCaseChange(int ind,string input, string output,vector<string>&ans)
{   

    if(ind == input.size())
    {
        ans.push_back(output);
        
        return;
    }

    if(isdigit(input[ind]))
    {
        output.push_back(input[ind]);
        letterCaseChange(ind + 1,input,output,ans);
    }
    else {
        //  lowercase Character
        output.push_back(tolower(input[ind]));
        letterCaseChange(ind + 1,input,output,ans);
        //  Not Pick
        output.pop_back();
        output.push_back(toupper(input[ind]));
        letterCaseChange(ind+1,input,output,ans);
    }
    


}


int main()
{
    string input = "a1b2c3";
    vector<string>ans;
    string output = "";
    // output.push_back(input[0]);
    // output.pop_back();
    letterCaseChange(0,input,output,ans);

    for(auto it : ans)
    {
        cout << it;
        cout << endl;
    }

    return 0;
}
