#include <bits/stdc++.h>
using namespace std;

void permutationWithSpaces(int ind,string input,string output,vector<string>&ans)
{
    if(ind == input.size())
    {
        ans.push_back(output);
        return;
    }
    if(ind == 0){
        output.push_back(input[ind]);
        permutationWithSpaces(ind + 1,input,output,ans);
    // not pick
    }
    else {
        output.push_back('_');
        output.push_back(input[ind]);
        permutationWithSpaces(ind + 1,input,output,ans);
        output.pop_back();
        output.pop_back();
        output.push_back(input[ind]);
        
        permutationWithSpaces(ind + 1,input,output,ans);
        
    }
    
    
    //pick 
    
}

int main()
{
    string input = "ABCD";
    vector<string>ans;
    string output = "";
    // output.push_back(input[0]);
    // output.pop_back();
    permutationWithSpaces(0,input,output,ans);

    for(auto it : ans)
    {
        cout << it;
        cout << endl;
    }
    return 0;

}