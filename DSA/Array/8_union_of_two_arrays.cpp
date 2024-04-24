#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr1 = {1,2,3,4,5,6};
    vector<int>arr2 = {1,2,3,6,7,8};

    // approach - 1
    // set<int>st;
    // for(int i = 0;i < arr1.size();i++)
    // {
    //     st.insert(arr1[i]);
    // }
    // for(int i = 0;i < arr2.size();i++)
    // {
    //     st.insert(arr2[i]);
    // }
    // vector<int>un(st.begin(),st.end());

    // for(auto it : un)
    //     cout << it << " ";
    // T.C - O(n*log(n) + m *log(m))
    // S.C -  O(n + m)
    //Approach
    // two pointers

    int n = arr1.size();
    int m = arr2.size();
    int i = 0; // to traverse on first arr
    int j = 0; // to traverse pn second array
    while(i < m && j < n)
    {
        if(arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else if(arr1[i] > arr2[j])
                cout << arr2[j++] << " ";
        else
            {
                cout << arr1[i] << " ";
                i++;
                j++;
            }
    }
    while (i < m)
        cout << arr1[i++] << " ";
 
    while (j < n)
        cout << arr2[j++] << " ";


    return 0;
}