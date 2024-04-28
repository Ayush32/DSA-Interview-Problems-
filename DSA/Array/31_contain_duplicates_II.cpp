#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>&arr,int k)
{
    // Approach 1 - Using Brute Force, Using Two Loop, and check arr[i] == arr[j] && abs(i-j) <= k
    int n = arr.size();
    // for(int i = 0;i < n;i++)
    // {
    //     for(int j = i + 1; j < n;j++)
    //     {
    //         if(arr[i] == arr[j] && abs(i-j) <= k)
    //             return true;
    //     }
    // }

    //Approach 2 -O(N), S.C - O(1)
    /*       we can think of hashmap to check whether the upcoming element of input array is present in hashset or not if present then diffrenece of(index in nums array of that element and value of that key in hashset is samller of equal to k or not)
        // we initialaized a unordered_map
        // then we check whether the current index element is present in map or not if it is not we insert the element with their respective index  and if the number is already present in the map, then update the position of that number
        // if if present then the diffrenece between the index of current element and vallue of current element in hashmap is equal of smaller than k if it is we return true.
        // else false
        */ 
    unordered_map<int,int>mp;
    for(int i = 0;i < n;i++)
    {
        if(mp.find(arr[i]) != mp.end() && abs(mp[arr[i]] - i))
            return true;
        else
            mp[arr[i]] = i;

    }
    return false;
}

int main()
{
    vector<int>arr = {1,2,3,1211};
    int k = 3;
    cout << containsDuplicate(arr,k);
    return 0;

}