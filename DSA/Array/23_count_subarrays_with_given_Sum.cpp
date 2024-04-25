#include<bits/stdc++.h>
using namespace std;

int countSubarrayGivenSum(vector<int>&arr,int k)
{
    // brute force using nested loop
    // int sum = 0;
    // int count = 0;
    // for(int i = 0;i < arr.size();i++)
    // {
    //     for(int j = i;j < arr.size();j++)
    //     {
    //         sum = sum + arr[j];
    //         if(sum == k)
    //         {
    //             count++;
    //         }
    //     }
    //     sum = 0;
    // }
    // return count;

    // Using Sliding Window
    int left = 0;
    int right = 0;
    int count = 0;
    int sum = 0;
    while(right < arr.size())
    {
        sum = sum + arr[right];

        while(left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if(sum == k)
            count++;
        
        right++;
    }
    return count;
}

int main()
{
    vector<int>arr = {3,4,7,2,-3,1,4,2};
    int k = 7;
    cout << countSubarrayGivenSum(arr,k);
    return 0;
}