//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int greaterElement = INT_MIN;
        vector<int>ans;
        for(int i = n- 1;i >=0 ;i--)
        {
            if(a[i] >= greaterElement) // check the current leader element with the next element if it is greater than current leade
            // make the currnet ith element as the new leader element
            {
                greaterElement = a[i]; // first element from right side is always the leader element
                ans.push_back(greaterElement);
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
