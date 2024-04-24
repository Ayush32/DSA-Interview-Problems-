#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int>&arr)
{
    int i,j;
    bool swapped = false;
    int n = arr.size();
    for(i = 0;i < n - 1;i++)
    {
        swapped = false;
        for(j = 0;j < n - i -1;j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
            
        }
        // If no two elements were swapped
        // by inner loop, then break
        if(swapped == false)
            break;
    }
    for(auto it : arr)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int>arr = {5,2,4,-1,0,8,7,3};
    bubbleSort(arr);
    cout << " bubble sort" << " ";
    return 0;
}