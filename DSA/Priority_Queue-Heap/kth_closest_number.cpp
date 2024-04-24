#include<bits/stdc++.h>
using namespace std;

void KthClosestNumber(vector<int>&arr,int n,int k,int x)
{
    int index = 0;
        vector<int>ans;
        // int size = (num == K) ?  K : K + 1;
        priority_queue<pair<int,int>>maxHeap;
        
        // insert first k + 1 element into the queue
        for(int i = 0; i < n;i++)
        {
            if(arr[i] == x)
                continue;
            // first - diff, second,integer element
            int diff = abs(arr[i] - x);
            maxHeap.push({diff,-arr[i]});
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
        }
        //
        while(!maxHeap.empty())
        {
            ans.push_back(-maxHeap.top().second);
            maxHeap.pop();
        }
        
        for(auto it : ans)
        {
             cout << it << " ";
        }
}

int main()
{
    vector<int>arr = {12, 16, 22, 30, 35, 39, 42,
                        45, 48, 50, 53, 55, 56};
    int k = 4;
    int x = 35;
    KthClosestNumber(arr,arr.size(),k,x);
    return 0;
}