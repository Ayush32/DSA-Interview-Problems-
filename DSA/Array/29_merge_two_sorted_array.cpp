#include<bits/stdc++.h>
using namespace std;

// Approach 1 - Using Extra Space to store both the array element in sorted array
// Take two pointer left and right left pointing the first index of arr1, and right pointer at first index of second element
//  if(Arr1[l] <= arr2[right]), insert the arr1[left] element in arr3 and increment the left pointer
// if(Arr2[l] >= arr2[right]), insert the arr2[right] element in arr3 and increment the right pointer
//  if one of the pointer reaches at the end, we will first insert all remaining element of arr1 to arr3 , same as for arr3
//  trNow, from sorted array arr3[], we will copy first n(size of arr1[]) elements to arr1[], and the next m(size of arr2[]) elements to arr2[].
// T.C - O(N +M) + O(N+M)
//  S>C - O(n+m)

// Intuition:
// Intuition is pretty straightforward. As the given arrays are sorted, we are using 2 pointer approach to get a third array, 
// that contains all the elements from the given two arrays in the sorted order. 
// Now, from the sorted third array, we are again filling back the given two arrays.
void mergeSort(vector<int>&arr1,vector<int>&arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int left = 0;
    int right = 0;
    vector<int>arr3(n+m,0);
    int index = 0;

    while(left < n && right < m)
    {
        if(arr1[left] <= arr2[right])
        {
            arr3[index] = arr1[left];
            left++;
            index++;
        }
        else {
            arr3[index] = arr2[right];
            right++;
            index++;
        }
    }
    while(left < n)
    {
        arr3[index] = arr1[left];
        index++;
        left++;
    }
    while(right < m)
    {
        arr3[index] = arr2[right];
        right++;
        index++;
    }
    for(int i = 0;i < n+ m;i++)
    {
        if(i < n)
            arr1[i] = arr3[i];
        else
            arr2[i-n] = arr3[i];
    }

}
//  we merge the given array, one thing we can assure is that arr1[] will contain all the smaller elements and arr2[]
// will contain all the bigger elements. This is the logic we will use. Using the 2 pointers, 
// we will swap the bigger elements of arr1[] with the smaller elements of arr2[] until the minimum of arr2[] becomes greater or equal to the maximum of arr1[].

// Approach 2 - Take two pointer

void mergeSortArray(vector<int>&arr1,vector<int>&arr2)
{
    // first pointer will be at the last index of arr1
    int n = arr1.size();
    int left = n - 1;
    int right = 0;
    int m = arr2.size();
    while(left >= 0 && right < m)
    {
        if(arr1[left] > arr2[right])
        {
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else {
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

}


int main()
{
    vector<int>arr1 = {1, 5, 9, 10, 15, 20};
     vector<int>arr2 = {2, 3, 8, 13};
    mergeSort(arr1,arr2);
    mergeSortArray(arr1,arr2);
   for(auto it : arr1){
    cout << it <<" ";
   }
   cout << endl;
   for(auto it : arr2)
    {
        cout << it << " ";
    }
    return 0;

}
