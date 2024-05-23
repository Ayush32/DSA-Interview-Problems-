#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>arr,int n,int x)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == x)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < x)
            low = mid + 1;
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int rowsWithMax(vector<vector<int>>matrix,int x)
{
    int maxCount = 0;
    int index = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n;i++)
    {
        int count = m - firstOccurrence(matrix[i],n,1);
        if (maxCount < count)
        {
            index = i;
            maxCount = count;
        }
    }
    return index;
}

int main()
{
    vector<vector<int>>matrix = { {0, 0, 0, 1}, 
                    {0, 1, 1, 1}, 
                    {1, 1, 1, 1}, 
                    {0, 0, 0, 0}};
    cout << rowsWithMax(matrix,1);
    return 0;
}