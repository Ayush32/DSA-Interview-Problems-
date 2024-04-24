#include <bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int T;
	cin >> T;
	while(T--)
	{
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    for(int i = 0;i < n;i++)
	    {
	        cin >> arr[i];
	    }
	    
	    // store freq of every element
	    unordered_map<int,int>mp;
	    for(int i = 0;i < n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	    for(auto it : mp)
	    {
	        pq.push({-1*it.second,it.first});
	    }
        cout << "freq " << " -> " << " value"; 
	    while(!pq.empty())
	    {
	        int freq = abs(pq.top().first);
	        int element = pq.top().second;
	        // while(freq--){
	        //     cout << element << " ";
	        // }
            cout << freq << " -> " << element;
            cout << endl;
	        pq.pop();
	        
	    }
	    cout << endl;
	}
	return 0;
}