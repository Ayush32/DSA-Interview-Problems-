#include<bits/stdc++.h>
using namespace std;


// Floor - greatest Element smaller than X , x = 16, x = 14 

int floorOfAnElement(vector<int>arr,int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start <= end)
    {
        int mid = start  +(end - start)/2;
        
        if(arr[mid] == target)
            return arr[mid];
        
        else if(arr[mid] > target)
        {
            // move to left part
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            ans = arr[mid];
            start = mid + 1;
        }
    }
    return ans;
}



int main()
{
    vector<int>arr = {1,8,15,17,25,27,29,35};
    int target = 18;
    cout << floorOfAnElement(arr,target);
    // cout << binarySearchRecursion(arr,target,0,arr.size());
    return 0;
}