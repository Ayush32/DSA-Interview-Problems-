
def insert_interval(intervals, newInterval):
        # intervals.append(newInterval)
        # intervals.sort()
        # tempInterval = intervals[0]
    mergeIntervals = []
        # for i in range(1,len(intervals)):
        #     if tempInterval[1] >= intervals[i][0]:
        #         tempInterval[1] = max(intervals[i][1],tempInterval[1])
        #     else:
        #         mergeIntervals.append(tempInterval)
        #         tempInterval = intervals[i]

        # mergeIntervals.append(tempInterval)

        # return mergeIntervals

        # optimized approach
    i = 0

        # no overlapping intervals
    n = len(intervals)
    while i < n and newInterval[0] > intervals[i][1]:
        mergeIntervals.append(intervals[i])
        i = i + 1
        # overlapping case and merging intervals

    while i < n and newInterval[1] >= intervals[i][0]:
        newInterval[0] = min(intervals[i][0],newInterval[0])
        newInterval[1] = max(intervals[i][1],newInterval[1])
        i = i + 1
    mergeIntervals.append(newInterval)
        #  no overlapping intervals so we will merge all inteerval into res array
    while i < n:
        mergeIntervals.append(intervals[i])
        i = i + 1
        
    return mergeIntervals

intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]]
# m = [[1,2],[3,8]]
# newInterval = [3,8]
newInterval = [4,8]
print(insert_interval(intervals,newInterval))
   
        



             
        