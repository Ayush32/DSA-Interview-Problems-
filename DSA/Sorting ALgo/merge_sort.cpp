#include<bits/stdc++.h>
using namespace std;

//he time complexity of Merge Sort isθ(Nlog(N)) in all 3 cases (worst, average, and best) as merge sort always divides the 
// array into two halves and takes linear time to merge two halves.

void merge(vector<int>&arr,int low,int mid,int high)
{
    vector<int>temp; // temp array
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else if(arr[left] >= arr[right])
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    // remaining element in left side
    while(left <= mid)
    {
        temp.push_back(arr[left++]);
    }
    // remaining element in right side
    while(right <= high)
    {
        temp.push_back(arr[right++]);
    }

    for(int i = low;i <= high;i++)
    {
        arr[i] = temp[i-low];
    }

}

void mergeSort(vector<int>&arr,int low,int high )
{
    if(low >= high)
        return;
    int mid = (low + high)/2;
    mergeSort(arr,low,mid); // left part half
    mergeSort(arr,mid + 1,high);
    merge(arr,low,mid,high);
}


int main()
{
    vector<int>arr = {6,4,8,1,3,10,7};
    
    cout << "Before sorting " << endl;
    for(auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "After sorting " << endl;
    mergeSort(arr,0,arr.size()-1);
    for(auto it : arr)
    {
        cout << it << " ";
    }
}