#include<bits/stdc++.h>
using namespace std;

void findAllSubset(int ind,string ip, string op,int &count)
{   

    if(ind == ip.size())
    {
        // ans.push_back(v);
        count++;
        // cout << op;
        // cout << endl;
        return;
    }


    //  Pick
    op.push_back(ip[ind]);
    findAllSubset(ind + 1,ip,op,count);
    //  Not Pick
    op.pop_back();
    findAllSubset(ind+1,ip,op,count);


}


int main()
{
    string s = "xyz";
    string op = "";
    int count = 0;
    findAllSubset(0,s,op,count);
    cout << count;
    return 0;
}
