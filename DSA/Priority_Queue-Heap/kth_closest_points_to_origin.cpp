#include <bits/stdc++.h> 
vector<vector<int>> KClosestPoints(vector<vector<int>> &points, int k)
{
	// Write your code here.
	priority_queue<pair<int,pair<int,int>>>pq;

	for(int i = 0;i < points.size();i++)
	{
		int distance = points[i][0]*points[i][0] + points[i][1] * points[i][1];
		pq.push({distance,{points[i][0],points[i][1]}});
		if(pq.size() > k)
			pq.pop();
	}
	vector<vector<int>>closestPoints;

	while(!pq.empty())
	{
		auto it = pq.top();
		pq.pop();
		int distance = it.first;
		int firstPoint = it.second.first;
		int secondPoint = it.second.second;
		closestPoints.push_back({firstPoint,secondPoint}); 
	}
	return closestPoints;
}