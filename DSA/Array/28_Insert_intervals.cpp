// Approach 1 - Same as Merge sort,
// ? insert new interval into input intervals
//  sort the intervals
// follow the same algo that we used in merge intervals question
// T.C - O(NLogN), S.C - O(No of Non-overlapped intervals)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals,vector<int>newIntervals) {
        // sort intervals
        // T.C - O(NlogN) + O(N)
        // S.C - O(N) for storing the merge intervals, except for answer array we are using any extra spaces
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<vector<int>>mergeIntervals;
        // store the first intervals in temp;
        vector<int>tempIntervals = intervals[0];

        for(int i = 1;i< n;i++)
        {
            // Compare the end time of previous intervals with the starting time of next Intervals
            //  if start time of next intervals is smaller than end time of previous intervals then they are overlapped
            // we take maximum from end time of both next and previous intervals
            if(tempIntervals[1] >= intervals[i][0]){
                tempIntervals[1] = max(tempIntervals[1],intervals[i][1]);
            }
            else {
                // if they are non-overalapped we store out current interval into our ans array
                mergeIntervals.push_back(tempIntervals);
                // update temp Intervals with current intervals.
                tempIntervals = intervals[i];
            }
        }
        // at last when the loops end we have our last interval of input array. 
        // we add that intervals into ans array. 
        mergeIntervals.push_back(tempIntervals);
        
        return mergeIntervals;

    }
};
// Approach 2 - 
class Solution {
public:
   vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), i = 0;
        vector<vector<int>> res;
        //case 1: no overlapping case before the merge intervals
		//compare ending point of intervals to starting point of newInterval
        while(i < n && intervals[i][1] < newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }                           
		//case 2: overlapping case and merging of intervals
        while(i < n && newInterval[1] >= intervals[i][0]){
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);
        // case 3: no overlapping of intervals after newinterval being merged
        while(i < n){
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
};






int main()
{
    vector<vector<int>>intervals = {[[1,3],[6,9]]};
    vector<int>newIntervals = {2,5};
    mergeIntervals(intervals,newIntervals)
    return 0;
}

