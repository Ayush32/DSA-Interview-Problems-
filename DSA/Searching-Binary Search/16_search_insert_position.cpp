#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>&arr,int target)
{
    if(target > arr.size())
        return arr.size();
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] >= target)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}
int main()
{
    vector<int>arr = {1,3,5,6};
    int target = 7;
    cout << searchInsert(arr,target);
    return 0;
}