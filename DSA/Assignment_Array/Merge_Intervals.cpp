class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // sort intervals
        // T.C - O(NlogN)
        // S.C - O(no.of non-overlapped intervals)
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