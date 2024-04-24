#include <bits/stdc++.h>
using namespace std;


void TOH(int n, int s, int h, int d, vector<vector<int>>&ans)
{
    if(n == 0)
    {
        return;
    }
    TOH(n-1,s,d,h,ans);
    ans.push_back({s,d});
    TOH(n-1,h,s,d,ans);


}

int main()
{
    //    Write your code herE
    int n = 3;
    int s = 1,h = 2,d = 3;
    vector<vector<int>>ans;
    vector<int>steps;
    TOH(n,s,h,d,ans);
    for(int i = 0; i < ans.size();i++)
    { 
        cout << ans[i][0] << " " << ans[i][1];
        cout << endl;
    }  
    return 0;
}