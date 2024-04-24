#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int>&arr)
{
    if(arr[0] != arr[1])
        return arr[0];
    
    int n  = arr.size();
    if(arr[n - 1] != arr[n - 2])
        return arr[n - 1];
    
    int start = 1;
    int end = arr.size() - 2;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
            return arr[mid];
        
        if((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || mid % 2 == 0 && arr[mid] == arr[mid + 1])
            start = mid + 1;
        else   
            end = mid - 1;
    }
    return -1;
}

int main()
{
     
    cout << singleElement(arr);
    return 0;

}