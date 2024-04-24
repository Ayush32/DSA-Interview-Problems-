#include <bits/stdc++.h>
using namespace std;

int main() {
     vector<int>arr = {-5, 8, -14, 2, 4, 12 };
     int k = -5;
    //   Approach 1 -  Using Nestep loop i.e, find all subarrays whose sum is equal to k, and return the length of 
    // longest subarray from all subarrays
    int sum = 0;
    int lengthSubarray = 0;
    int count = 0;
    for(int i = 0;i < arr.size();i++)
    {
        for(int j = i;j < arr.size();j++)
        {
            sum += arr[j];
            if(sum == k)
            {
                lengthSubarray = max(lengthSubarray,j-i+1);
            }
        }
        sum = 0;
    }
   cout << lengthSubarray;
    return 0;
}

// APproach 2- Sliding window
int main() {
     vector<int>arr = {2,3,5,1,9};
     int k = 10;
   
    int sum = 0;
    int lengthSubarray = 0;
    int left = 0;
    int right = 0;
    // base case
    if(nums.size() == 0 || k == 0)
        return 0;
    while(right < arr.size())
    {
            sum = arr[right] + sum;
            
        while(left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            lengthSubarray = max(lengthSubarray,right - left + 1);
        }
        right++;
        
        
        
    }
    cout << lengthSubarray;
    
    return 0;

// //     Time Complexity: O(2*N), where N = size of the given array.
// // Reason: The outer while loop i.e. the right pointer can move up to index n-1(the last index). Now, the inner while loop i.e. the left pointer can move up to the right pointer at most.
//  So, every time the inner loop does not run for n times rather it can run for n times in total. 
//  So, the time complexity will be O(2*N) instead of O(N2).

// Space Complexity: O(1) as we are not using any extra space.

// Space Complexity: O(1) as we are not using any extra space
}