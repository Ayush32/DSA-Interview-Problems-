#include<bits/stdc++.h>
using namespace std;


int main()
{

    vector<int>v = {0,1,0,1,1,0,0,1};
    vector<int>newOutput(v.size(),0);
    int d = 7;
    int n = v.size();

    d = d %(n - 2);
    while(d--){
        
        for(int i = 1;i<=6;i++)
        {
            
                newOutput[i] = !(v[i-1] ^ v[i+1]);
        }
        v = newOutput;
    }
    for(auto it : v){
        cout << it << " ";
    }
    return 0;

}