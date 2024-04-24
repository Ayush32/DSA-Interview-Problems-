#include <bits/stdc++.h>
using namespace std;

int modifiedBS(vector<int>&arr,int target)
{
    int start = 0;
    int end = arr.size();
    while(start < end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
            return mid;
        else if(mid > start && arr[mid-1] == target)
            return mid - 1;
        else if(mid < end && arr[mid + 1] == target)
            return mid + 1;
        
        if(arr[mid] < target)
            start = mid + 2;
        else 
            end = mid - 2;
    }
}

int main() 
{
    vector<int>v = {5,10,30,20,40};
    int target = 30;
    cout << modifiedBS(v,target);

}