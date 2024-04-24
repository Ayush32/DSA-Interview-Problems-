#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr,int target)
{
    int start = 0;
    int end = arr.size()-1;

    while(start <= end)
    {
        int mid = start  +(end - start)/2;
        
        if(arr[mid] == target)
            return mid;
        
        else if(arr[mid] > target)
        {
            // move to left part
            start = mid + 1;
        }
        else if(arr[mid] < target)
        {
            end = mid - 1;
        }
    }
    return -1;
}

// recursion 

int binarySearchRecursion(vector<int>&arr,int target,int start,int end)
{
    if(end >= start){
        

    int mid = start + (end - start)/2;

    if(arr[mid] == target)
        return mid;
    
    else if(arr[mid] < target)
        return binarySearchRecursion(arr,target,start,mid - 1);
    
    return binarySearchRecursion(arr,target,mid + 1,end);
    
    
    }

    return -1;

}

int main()
{
    vector<int>arr = {18,17,14,9,8,3};
    
    int target = 8;
    cout << binarySearch(arr,target);
    cout << binarySearchRecursion(arr,target,0,arr.size()-1);
    return 0;
}