#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr,int target)
{
    int start = 0;
    int end = arr.size();

    while(start < end)
    {
        int mid = start  +(end - start)/2;
        
        if(arr[mid] == target)
            return mid;
        
        else if(arr[mid] > target)
        {
            // move to left part
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    return -1;
}

// recursion 

int binarySearchRecursion(vector<int>&arr,int target,int start,int end)
{
    if(end > start){
        

    int mid = start + (end - start)/2;

    if(arr[mid] == target)
        return mid;
    
    else if(arr[mid] < target)
        return binarySearchRecursion(arr,target,mid + 1,end);
    
    return binarySearchRecursion(arr,target,start,mid - 1);
    }

    return -1;

}

int main()
{
    vector<int>arr = {1,8,15,17,25,27,29,35};
    int target = 15;
    // cout << binarySearch(arr,target);
    cout << binarySearchRecursion(arr,target,0,arr.size());
    return 0;
}