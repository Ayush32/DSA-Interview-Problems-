/*
We are using two pointers i.e. left and right. The left pointer denotes the starting index of the subarray and the right pointer denotes the ending index.
 Now as we want the longest subarray, we will move the right pointer in a forward direction every time adding the element i.e. a[right] to the sum. 
 But when the sum of the subarray crosses k, we will move the left pointer in the 
 forward direction as well to shrink the size of the subarray as well as to decrease the sum. Thus, we will consider 
 the length of the subarray whenever the sum becomes equal to k.*/

 #include<bits/stdc++.h>
 using namespace std;


 int main()
 {
    vector<int>arr = {2,3,5};
    int k = 8;
    int left = 0;
    int right = 0;
    int sum = 0;
    int maxLength = 0;
    while(right < arr.size())
    {
        sum += arr[right];

        while(left < right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if(sum == k)
        {
            maxLength = max(maxLength,right - left  +1);

        }
        right++;
    }
    cout << maxLength;
    return 0;
 }