#include<bits/stdc++.h>
using namespace std;


int firstOccurrence(vector<int>&arr,int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start <= end)
    {
        int mid = start  +(end - start)/2;

        if(arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

    }
    return ans;
}

int lastOccurrence(vector<int>&arr,int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start <= end)
    {
        int mid = start  +(end - start)/2;

        if(arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

    }
    return ans;
}

int main()
{
    vector<int>arr = {2,4,10,10,18,20};
    
    int target = 10;
    int firstOcc = firstOccurrence(arr,target);
    int lastOcc = lastOccurrence(arr,target);
    int totalCount = lastOcc - firstOcc + 1;
    cout << "Total Number of count of an Element -> " << totalCount <<endl; 
    // cout << "last " << lastOcc <<endl; 
    return 0;
}