#include<bits/stdc++.h>
using namespace std;

int NumberOfRotation(vector<int>&arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int N = arr.size();

    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        int prev = (mid + N - 1) % N;
        int next = (mid + 1) % N;

        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev])
            return mid;  // minimum element

        if (arr[end] >= arr[mid])
            end = mid - 1;
        else if(arr[start] <= arr[mid])
            start = mid + 1;
    }
    return -1;

}

int main()
{
    vector<int>arr = {11,12,15,18,2,5,6,8};
    
    // int target = 8;
    cout << NumberOfRotation(arr);
    // cout << binarySearchRecursion(arr,target,0,arr.size()-1);
    return 0;
}