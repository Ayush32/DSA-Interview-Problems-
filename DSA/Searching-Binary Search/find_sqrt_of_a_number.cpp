#include<bits/stdc++.h>
using namespace std;




int sqrtNumber(int n)
{
    int start = 1;
    int end = n;
    
    while(start <= end)
    {
        long long mid = start  +(end - start)/2;
        long long val = mid * mid;
        if(val <= (long long )(n))
            start = mid + 1;
        else  {
            end = mid - 1;
        }        
        
    }
    return end;
}



int main()
{
    int n = 28;
    // int target = 7;
    cout << sqrtNumber(n);
    // cout << binarySearchRecursion(arr,target,0,arr.size());
    return 0;
}