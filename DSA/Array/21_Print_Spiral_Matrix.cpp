#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int> > a{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };
                            
    int n = a.size();
    int m = a[0].size();
    vector<int>ans;
    int top = 0; // first row
    int bottom = n-  1;  // last col
    int left = 0; // first col
    int right = m - 1; // last col
    
    while(top <= bottom && left <= right)
    {
        // left to right same for loop - row is same only, column is chaning
        for(int i = left; i <= right;i++)
        {
            ans.push_back(a[top][i]);
        }
        top++;
        // top to bottom same for loop - column is same only row is chaning
        
        for(int i = top;i <= bottom;i++)
        {
            ans.push_back(a[i][right]);
        }
        right--;
        
        // right to left -  column is changing only, row is same
        if(top <= bottom)
        {
            for(int i = right;i >= left;i--)
            {
                ans.push_back(a[bottom][i]);
            }
            bottom--;
        }
        // bottom to top -  column is same only, row is changing
        if(left <= right)
        {
            for(int i = bottom; i >= top;i--)
            {
                ans.push_back(a[i][left]);
            }
            left++;
        }
    }
    for(auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}