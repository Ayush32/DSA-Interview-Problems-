#include<bits/stdc++.h>
using namespace std;

void threeSum(vector<int>arr)
{
    // Approach 1 -  Using Brute Force, T-C - O(N*^3), S.C - O(1)

//     Time Complexity: O(N2 * log(no. of unique triplets)), where N = size of the array.
// Reason: Here, we are mainly using 3 nested loops. And inserting triplets into the set takes O(log(no. of unique triplets)) time complexity. But we are not considering the time complexity of sorting as we are just sorting 3 elements every time.

// Space Complexity: O(2 * no. of the unique triplets) + O(N) as we are using a set data structure and a list to store the triplets and extra O(N) for storing the array elements in another set.
    int n = arr.size();
    sort(arr.begin(),arr.end());
    set<vector<int>>st;
    for(int i = 0;i < n;i++)
    {
        int j = i + 1;
        int k = arr.size() - 1;

        while(j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if(sum == 0)
            {
                st.insert(vector<int>{arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(sum > 0)
            {
                k--;
            }
            else {
                j++;
            }
        }
    }
    vector<vector<int>>ans;
    for(auto it : st)
    {
        ans.push_back({it});
    }

    int row = ans.size();
    int col = ans[0].size();

    for(int i =0;i < row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    // Approach 3 - we will not use set to find the unique, same complexity but space Complexity will be O(1)
    // ------- How to skip duplicate element -----------
    // As the entire array is sorted, the duplicate numbers will be in consecutive places. 
    // So, while moving a pointer, we will check the current element and the adjacent element. 
    // Until they become different, we will move the pointer by 1 place. We will follow this process for all 3 pointers. 
    // Thus, we can easily skip the duplicate elements while moving the pointers.

    // Now, we can also remove the HashSet as we have two moving pointers i.e. j and k that 
    // will find the appropriate value of arr[j] and arr[k]. So, we do not need that HashSet anymore for the look-up operations.
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i = 0;i < n;i++)
    {
        if(i == 0 || i > n && arr[i] != arr[i+1])
            continue;

        int j = i + 1;
        int k = arr.size() - 1;

        while(j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];

            if(sum == 0)
            {
                ans.push_back({arr[i],arr[j],arr[k]});

                while(j < k && arr[j] != arr[j + 1]) // skipping duplicates - sorted array so duplicate number will consecutive place
                    j++;
                while(j < k && arr[k] != arr[k-1]) //// skipping duplicates - sorted array so duplicate number will consecutive place
                    k--;
                
                j++;
                k--;
            }
            else if(sum > 0)
                k--;
            else
                j++;
        }
    }
    int row = ans.size();
    int col = ans[0].size();
    for(int i =0;i < row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int>arr = {-1,0,1,2,-1,-4};
    threeSum(arr);
    return 0;
}