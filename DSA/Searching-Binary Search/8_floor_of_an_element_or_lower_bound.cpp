#include <bits/stdc++.h>
using namespace std;

int floor(vector<int>&arr,int target)
{
    int start = 0;
    int ans = -1;
    int end = arr.size();
    while(start < end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
            return arr[mid];
        
       if(arr[mid] < target)
        {
                ans = arr[mid];
                start = mid + 1;
        }
        else if(arr[mid] > target)
            {
                
            end = mid - 1;
            }
    }
    return ans;
}

int main() 
{
    vector<int>v = {1,2,8,10,11,12,19};
    int target = 8;
    cout << floor(v,target);

}