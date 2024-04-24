#include<bits/stdc++.h>
using namespace std;

int threeSumSmaller(vector<int>&nums,int target)
{
    // Approach - 2 - Brute Force
    // T.C - O(N^3)
    // S.C - O(1)
    // int n = nums.size();
    // int count = 0;
    // for(int i = 0;i<n-2;i++)
    // {
    //     for(int j = i + 1; j<n-1;j++)
    //     {
    //         for(int k = j + 1; k < n;k++)
    //         {
    //             if((i < j && j < k) && (nums[i] + nums[j] + nums[k] < target))
    //                 count++;
    //         }
    //     }
    // }
    // Approach 2  - Two pointer + Sorting
    // T.C - O(N^2logN)
    // S.C - O(1)
    int n = nums.size();
    int count = 0;
    sort(nums.begin(),nums.end());
    for(int i = 0;i<n-2;i++)
    {
        int low = i + 1; // pointer after ith elemnt
        int high = n-1; // point last index

        while(low < high){
            if(nums[i] + nums[low] + nums[high] >= target)
            {
                high--;
            }
            else {
                count += (high - low);
                low++;
            }
        }
    }
    return count;

}

int main()
{
    vector<int>nums = {-2,0,-1,3};
    int target = 2;
    cout << threeSumSmaller(nums,target);

}
