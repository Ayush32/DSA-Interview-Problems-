#include<bits/stdc++.h>
using namespace std;


// void fibo(int n){
    
//         int a = 1;
//         int b = 1;
//         cout << a << " " << b << " ";
//         for(int i = 2;i<n;i++)
//         {
//             cout << a + b << " ";
//             int temp = a + b;
//             a = b;
//             b = temp;
            
//         }
// }

int main()
{

    vector<int>v = {7,3,5,4,2,8,2};
    int target = 9;
      unordered_map<int,int>mp;
        vector<vector<int>>ans;
        for(int i = 0;i<v.size();i++)
        {
            if(mp.find(target-v[i]) != mp.end()){
                ans.push_back({mp[target-v[i]],i});
                
            }
            mp[v[i]] = i;
        }

        int n = ans.size();
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<ans[0].size();j++)
            {
            cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        
    return 0;

}
