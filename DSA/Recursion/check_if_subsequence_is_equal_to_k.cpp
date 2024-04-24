// You are given an array 'A' of size 'N' and an integer'K'’. You need to generate and return all subarrays of array ‘A’ whose sum = ‘K’.
// Note: In the output, you will see the 2D array lexicographically sorted.
#include <bits/stdc++.h>
using namespace std;

bool subsetSumEqualTok(int ind,vector<int>&arr,int target,int sum)
{
    if(ind == arr.size())
    {
        if(sum == target)
            return true;
        else
            return false;
    }
    if(sum <= target)
    {
        sum += arr[ind];
        if(subsetSumEqualTok(ind + 1,arr,target,sum)) return true;
        sum -= arr[ind];
    }
     if(subsetSumEqualTok(ind + 1,arr, target, sum)) return true;

     return false;

}

int main()
{
    vector<int>arr = {2,2,4,8};
    int target = 8;
    // int sum = 0;
    if(subsetSumEqualTok(0,arr,target,0) == true)
        cout << "True";
    cout << "False";

    return 0;
    
}