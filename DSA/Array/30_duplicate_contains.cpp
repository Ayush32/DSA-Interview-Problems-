#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>&arr)
{
    // approach 1  = Nested loop, run i to n, inner loop run from j = i + 1, < n and check if(arr[i] == arr[j]) return true
    // T.C - O(N*N), S.C - O(1)

    // approach 2 - Sorting + linear traversal , after sorting duplicate element will be consecutive to each other,
    // run loop from i =1 to i < n, check arr[i] == arr[i-1] return true else false; t.c - o(NLOGN)
    // using set store only unique element, we will push all elements into set if the size of set is diff from input array size we can say that array have duplicate element
    // T.C - O(N), because unordered set take O(1) for inserting element in average case
    // S.C - O(N) for taking set data structure

}

int main()
{
    vector<int>arr = {1,4,1,6,7,8,2,3};
    containsDuplicate(arr);
}