// Given an array of intervals where intervals[i] = [starti, endi], 
// merge all overlapping intervals, and return an array of the non-overlapping 
// intervals that cover all the intervals in the input.

 

// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
// Example 2:

// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]
// Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 
// [[1,3],[2,6],[8,10],[15,18]]
// --> [1,3] and [2,6] are overlapping because every start time should always be greater than end time of previous intervals
// --> but here 3(end time) is greater than 2(start time) so there are overlapping so we have to merge them,
// --> for merging, we have to compare the end time of current intervals with end time of next interval that should be..
// --> if endtime of current interval < endtime of next interval, i.e (3 < 6), true
// replace the end time of current intervals with end Time of next intervals(bascially we are merging them)
// [1,3],[2,6] => [1,6],[8,10],[15,18]
// we will sort the interval
// store first interval in temporary array
// run the loop, compre temp[1] > intervals[i][0] if true , temp[1] = max(temp[1],intervals[i][1])
// else ans.push_back()  temp = intervals[i]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
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

int main()
{
    vector<vector<int>>intervals = {[[1,3],[2,6],[8,10],[15,18]]};
    mergeIntervalss(intervals);
}