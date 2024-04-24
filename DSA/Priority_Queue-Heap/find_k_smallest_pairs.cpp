#include<bits/stdc++.h>
using namespace std;

void kSmallestPairs(vector<int>&arr1,vector<int>&arr2,int k)
{
    int index = 0;
        vector<vector<int>>ans;
        // int size = (num == K) ?  K : K + 1;
        priority_queue<pair<int,pair<int,int>>>pq;
        
        // insert first k + 1 element into the queue
        for(int i = 0; i < arr1.size();i++)
        {
            for(int j = 0; j < arr2.size();j++)
            {
                int sum = arr1[i] + arr2[j];

                if(pq.size() < k )
                    pq.push({sum,{arr1[i],arr2[j]}});
                else if(pq.top().first > sum)
                {
                    pq.pop();
                    pq.push({sum,{arr1[i],arr2[j]}});
                } 
                else  
                    break;
            }
            
        }
        //
        while(!pq.empty())
        {
            int first = pq.top().second.first;
            int second = pq.top().second.second;
            ans.push_back({first,second});
            pq.pop();
        }
        
        for(int i = 0 ; i < ans.size();i++)
        {
            for(int j = 0;j < ans[0].size();j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
}

int main()
{
    vector<int>arr1 = {1,7,11};
    vector<int>arr2 = {2,4,6};
    int k = 3;
    kSmallestPairs(arr1,arr2,k);
    return 0;
}