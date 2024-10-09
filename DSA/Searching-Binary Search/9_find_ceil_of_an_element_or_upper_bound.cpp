#include<bits/stdc++.h>
using namespace std;


// Floor - smaller Element greater than X , x = 16, x = 14 

int ceilOfAnElement(vector<int>arr,int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int ceil = -1;
    while(start <= end)
    {
        int mid = start  +(end - start)/2;
        
        if(arr[mid] == target)
            return arr[mid];
        
        else if(arr[mid] > target)
        {
            // move to left part
            ceil = arr[mid];
            end = mid - 1;
        }
        else
        {
            
            start = mid + 1;
        }
    }
    return ceil;
}



int main()
{
    vector<int>arr = {1,3,5,6,8,9};
    int target = 7;
    cout << ceilOfAnElement(arr,target);
    // cout << binarySearchRecursion(arr,target,0,arr.size());
    return 0;
}