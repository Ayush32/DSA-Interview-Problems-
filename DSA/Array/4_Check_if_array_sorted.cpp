#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(vector<int>arr)
{
    for(int i = 0;i < arr.size()-1;i++)
    {
        if(arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()
{
    vector<int>arr = {6,7,8,9,10,13,12};
    if(isArraySorted(arr) == true)
        cout << "Array is Sorted";
    else
        cout << "Array is not Sorted";

    return 0;
}