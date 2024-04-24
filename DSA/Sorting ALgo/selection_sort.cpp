#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr)
{
    int i,j,min_ind = 0;
    int n = arr.size();
    for(i = 0;i < n-1;i++)
    {
        // find the minimum element from unsorted part of array
        min_ind = i;
        for(j = i + 1;j < n;j++)
        {
            if(arr[j] < arr[min_ind])
                min_ind = j;
        }
        //place minimum element at correct position in sorted order
        if(min_ind != i)
            swap(arr[min_ind],arr[i]);
    }
    for(int i = 0;i < n;i++)
        cout << arr[i] << " ";


        // T.C - O(N*N)
        // S.C - O(1)

        /*
        Q1. Is Selection Sort Algorithm stable?

The default implementation of the Selection Sort Algorithm is not stable. However, it can be made stable. 
Please see the stable Selection Sort for details.

Q2. Is Selection Sort Algorithm in-place?

Yes, Selection Sort Algorithm is an in-place algorithm, as it does not require extra space.*/
}

int main()
{
    vector<int>arr = {5,2,4,-1,0,8,7,3};
    selectionSort(arr);
    return 0;

}