#include<bits/stdc++.h>
using namespace std;


// Floor - greatest Element smaller than X , x = 16, x = 14 

char nextAlphabeticalElement(vector<char>&arr,char target)
{
    int start = 0;
    int end = arr.size() - 1;
    char ans;
    while(start <= end)
    {
        int mid = start  +(end - start)/2;
        
        if(arr[mid] == target)
            return arr[mid];
        
        else if(arr[mid] > target)
        {
            // move to left part
            ans = arr[mid];
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            
            start = mid + 1;
        }
    }
    return ans;
}



int main()
{
    vector<char>arr = {'a','c','f','g','h'};
    char target = 'd';
    cout << nextAlphabeticalElement(arr,target);
    // cout << binarySearchRecursion(arr,target,0,arr.size());
    return 0;
}