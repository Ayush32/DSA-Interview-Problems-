#include<bits/stdc++.h>
using namespace std;

int peakIndex(vector<int>&arr)
{
    int n = arr.size();

    if(arr[0] > arr[1])
        return arr[0];
    if(arr[n - 1] > arr[n-2])
        return arr[n-1];
    
    int start = 1;
    int end = arr.size() - 2;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            return mid;
        else if(arr[mid] < arr[mid + 1])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int>arr = {0,10,5,2};
    cout << peakIndex(arr);
    return 0;

}
