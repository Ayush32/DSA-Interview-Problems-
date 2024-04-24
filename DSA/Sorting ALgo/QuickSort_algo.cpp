#include<bits/stdc++.h>
using namespace std;
/*
Best Case: Ω (N log (N))
The best-case scenario for quicksort occur when the pivot chosen at the each step divides the array into roughly equal halves.
In this case, the algorithm will make balanced partitions, leading to efficient Sorting.
Average Case: θ ( N log (N))
Quicksort’s average-case performance is usually very good in practice, making it one of the fastest sorting Algorithm.
Worst Case: O(N2)
*/

int partition(vector<int>&arr,int low,int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low;j<= high;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i + 1;
}

void quickSort(vector<int>&arr,int low,int high)
{
    if(low < high)
    {
        int pi = partition(arr,low,high);

        quickSort(arr,low,pi-1);
        quickSort(arr,pi + 1,high);
    }
}

int main()
{
    vector<int>arr = {6,4,8,1,3,10,7};
    // quickSort(arr,0,arr.size()-1);
    cout << "Before sorting " << endl;
    for(auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "After sorting " << endl;
    quickSort(arr,0,arr.size()-1);
    for(auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}