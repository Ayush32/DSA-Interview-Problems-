#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int>&arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int n = arr.size();
    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(mid == 0)
        {
            if(arr[mid] > arr[mid + 1])
                return arr[mid];
            else
                start = mid + 1;
        }
       else if(mid == n - 1)
        {
            if(arr[mid] > arr[mid - 1])
                return arr[mid];
            else
                end = mid - 1;
        }
        else{
            if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                return arr[mid];

            else if (arr[mid] < arr[mid +1])
                start = mid + 1;
            else 
                end = mid - 1;
        }
    }
    return -1;


}

int main()
{
        vector<int>arr = {1,2,1,3,5,6,4};
        cout << peakElement(arr);
        return 0;
}