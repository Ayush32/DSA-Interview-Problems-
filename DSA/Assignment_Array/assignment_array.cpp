#include<bits/stdc++.h>
using namespace std;

// Problem - 1
int totalSum(vector<int>&nums)
{
    int n = nums.size();
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
    }
    return sum;

}

// Problem - 2
int findIndex(vector<int>nums,int key)
{
    int index = 0; // store the key index if present in input array
    int n = nums.size();
    for(int i = 0;i<n;i++)
    {
        if(key == nums[i]){
            index = i;
        }
    }
    return index;
}

// Ques  - 3

int func(vector<int>&nums,int x)
{
    int n = nums.size();
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        if(nums[i] <= x){
            count = count + 1;
        }
    }
    return count;
}

// Ques - 4

void printElement(vector<int>&nums)
{
    int n = nums.size();
    for(int i = 0;i<n;i += 2)
    {
        cout << nums[i] << " ";
    }
}

// Ques- 5

void func(vector<int>&nums)
{
    int n = nums.size();
    vector<int>ans;
    // if the array size of 1
    

    for(int i = 0;i<n;i++)
    {
        if(i+1 == nums[i])
            ans.push_back(nums[i]);
    }
    for(auto it : ans){
        cout << it << " ";
    }

}
// Ques 6
bool isArray(vector<int>&nums)
{
    int l = 0;
    int r = nums.size()-1;
    vector<int>reverse = nums;
    while(l <= r){
        int temp = reverse[l];
        reverse[r] = reverse[l];
        reverse[r] = temp;
        l++;
        r--;
    }
    for(int i = 0;i<nums.size();i++)
    {
        if(reverse[i] != nums[i])
            return false;
    }
    return true;
}

// ques 7

int reduceArray(vector<int>&nums)
{
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        // {8, 1, 2, 9, 4, 3, 7, 5} = 
        // after sorting
        // 2,3,4,5,7,8,9 , O/P = 5
        // after sorting
        // {1,2,3,4,5,7,8,9} = O/P = 4
        if(n % 2 == 0)
            return (nums[n/2-1]);
        else
            return (nums[n/2]);


}

// ques 8

void exceptTwoGreatestElement(vector<int>&nums)
{
    int max1 =INT_MIN;
    int max2 = INT_MIN;
    int n = nums.size();
    vector<int>ans; /// store the element except two greatest element
    for(int i= 0;i<n;i++)
    {
        if(max1 <= nums[i]){
            max2 = max1;
            max1 = nums[i];
        }
        else if(max2 < nums[i]){
            max2 = nums[i];
        }
    }
    

    // cout << max1 << " " << max2;
    for(int i =0;i<n;i++) {
        if(nums[i] != max2 && nums[i] != max1)
            ans.push_back(nums[i]);
    }
    sort(ans.begin(),ans.end());
    for(auto it : ans)
        cout << it << " ";
}


// ques-9

int sumOfN(int n) 
{
    int sum = 0;
    for(int i = 1;i<=n;i++)
    {
        sum += i;
    }
    return sum;
}

// ques - 10

bool fascinatingNumber(int n){
    int freq[10] = {0};
    string original = to_string(n);
    if(original.size() < 3){
        return false ;
    } 
    string s1 = to_string(n*3);
    string s2 = to_string(n*2);
    string concatenatedString  = original + s2 + s1;
    // int digit = atoi(concatenatedString);
    // traversing the string character by character
    for(int i = 0;i<concatenatedString.size();i++)
    {
        int digit = concatenatedString[i] - '0'; // convert char into int digit
        if(freq[digit] && digit != 0 > 0){
            return false;
        }
        else {
            freq[digit]++;
        }
    }
    // check the freq array if any digit is missing;

    for(int i = 1;i< 10;i++)
    {
        if(freq[i] == 0)
            return false;

    }

    return true;
}


int main() 
{
    vector<int>nums = {8, 1, 2, 9, 4, 3, 7, 5};
    // 2,3,4,5,7,8,9
    int n = 853;
    // cout << totalSum(nums);
    // cout << findIndex(nums,key);
    // cout << func(nums,x);
    // printElement(nums);
    // func(nums);
    // if(isArray(nums) == true)
    //     {
    //         cout << "PERFECT";
    //     }
    // else {
    //     cout << "NOT PERFECT";
    // }
    // exceptTwoGreatestElement(nums);
    // cout << sumOfN(n);
    // if(fascinatingNumber(n)){
    //     cout << "FASCINATING NUMBER";
    // }
    // else {
    //     cout << "NOT FASCINATING NUMBER";
    // }
    cout << reduceArray(nums);
    return 0;
}
