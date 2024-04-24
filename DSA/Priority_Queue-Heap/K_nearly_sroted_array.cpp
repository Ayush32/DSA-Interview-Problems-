#include<bits/stdc++.h>
using namespace std;

void kNearlySorted(vector<int>&arr,int n,int k)
{
    int index = 0;
        vector<int>ans;
        // int size = (num == K) ?  K : K + 1;
        priority_queue<int,vector<int>,greater<int>>pq;
        
        // insert first k + 1 element into the queue
        for(int i = 0; i < k + 1;i++)
        {
            pq.push(arr[i]);
        }
        // 
        for(int i = k + 1;i  < n;i++)
        {
            arr[index++] = pq.top();
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty())
        {
            arr[index++] = pq.top();
            pq.pop();
        }
        
        for(auto it : arr)
        {
             cout << it << " ";
        }
}

int main()
{
    vector<int>arr = {6,5,3,2,8,10,9};
    int k = 3;
    kNearlySorted(arr,arr.size(),k);
    return 0;
}