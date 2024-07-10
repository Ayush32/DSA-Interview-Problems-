#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int>&arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int N = arr.size();

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(mid == 0)
        {
            if(arr[mid] > arr[mid + 1])
                return mid;
            else
                start = mid + 1;
        }
        else if(mid == N - 1)
        {
            if(arr[mid] > arr[mid - 1])
                return mid;
            else
                end =  mid - 1;
        }
        else {
            if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                return mid;
            
            else if(arr[mid] < arr[mid + 1])
                start = mid + 1;

            else
                end = mid - 1;
        }
    }
    return -1;

}

int binarySearchDesc(vector<int>&arr,int target,int start,int end)
{
    
    while(start <= end)
    {
        int mid = start  +(end - start)/2;
        
        if(arr[mid] == target)
            return mid;
        
        else if(arr[mid] < target)
        {
            // move to left part
            end = mid - 1;
        }
        else if(arr[mid] > target)
        {
            start = mid + 1;
        }
    }
    return -1;
}
 
int binarySearchAsc(vector<int>&arr,int target,int start,int end)
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
    vector<int>arr = {3, 9, 10, 20, 17, 5, 1};
    int target = 20;
    int peakElementIndex = peakElement(arr);
    int leftPart = binarySearchAsc(arr,target,0,peakElementIndex - 1);
    int rightPart = binarySearchDesc(arr,target,peakElementIndex,arr.size() - 1);
    if(leftPart != -1)
        cout << leftPart;
    else
        cout << rightPart;
    return 0;

}