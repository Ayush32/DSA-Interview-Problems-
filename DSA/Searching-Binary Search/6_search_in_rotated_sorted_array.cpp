#include<bits/stdc++.h>
using namespace std;

int minIndex(vector<int>&arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int N = arr.size();

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        int next = (mid + 1) % N;
        int prev = (mid + N - 1) % N;

        if(arr[mid] <= arr[prev] && arr[mid] <= arr[next])
        {
            return mid;
        }
        else if(arr[mid] <= arr[end])
            end = mid - 1;
        else if(arr[mid] >= arr[start])
            start = mid + 1;
    }
    return -1;
}
int binarySearch(vector<int>arr,int target,int start,int end)
{
    
    while(start <= end)
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

int main()
{
    vector<int>arr = {11,12,15,18,2,5,6,8};
    int target = 15;
    // cout << binarySearch(arr,target);
    int minElementIndex = minIndex(arr);
    int leftPart = binarySearch(arr,target,0,minElementIndex-1);
    int rightPart = binarySearch(arr,target,minElementIndex,arr.size() - 1);
    if(leftPart != -1)
        cout << leftPart;
    else
        cout << rightPart;
    return 0;
}