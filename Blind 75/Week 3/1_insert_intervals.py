'''
You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] 
represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. 
You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

Note that you don't need to modify intervals in-place. You can make a new array and return it.

 

Example 1:

Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]
Example 2:

Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
'''


def insert_interval(intervals,newInterval):
    '''
    T.C - O(NlogN)
    S.C - O(1)
    '''
    intervals.append(newInterval)
    intervals = sorted(intervals)
    tempInterval = intervals[0]
    mergeIntervals = []
    for i in range(1,len(intervals)):
        if tempInterval[1] >= intervals[i][0]:
            tempInterval[1] = max(intervals[i][1],tempInterval[1])
        else:
            mergeIntervals.append(tempInterval)

            tempInterval = intervals[i]

    mergeIntervals.append(tempInterval)
            
    return mergeIntervals

# T.C - O(N)

def insert_interval_optimized_approach(intervals,newInterval):
    '''
    T.C - O(NlogN)
    S.C - O(1)
    '''

    mergeIntervals = []
    i = 0
    n = len(intervals)
    
    # case 1 - no overlapping intervals
    while i < n and newInterval[0] > intervals[i][1]:
        mergeIntervals.append(intervals[i])
        i = i + 1
        
    # case 2 -  overlapping intervals
    
    while i < n and newInterval[1] >= intervals[i][0]:
        newInterval[0] = min(newInterval[0],intervals[i][0])
        newInterval[1] = max(newInterval[1],intervals[i][1])
        i = i + 1
        
    mergeIntervals.append(newInterval)
    
    # case 3 - merge remaining intervals
    while i < n:
        mergeIntervals.append(intervals[i])
        i = i + 1

    return mergeIntervals


intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]]
newInterval = [4,8]
print(insert_interval(intervals,newInterval))
print(insert_interval_optimized_approach(intervals,newInterval))