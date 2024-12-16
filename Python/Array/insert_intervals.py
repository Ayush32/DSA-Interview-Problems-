
def insertIntervals(intervals,newInterval):
    i = 0
    n = len(intervals)
    res = []
    # case 1  no overlapping
    while i < n and newInterval[0] > intervals[i][1]:
        res.append(intervals[i])
        i = i + 1
        
    # case 2 overlapping
    
    while i < n and newInterval[1] >= intervals[i][0]:
        newInterval[0] = min(intervals[i][0],newInterval[0])
        newInterval[1] = max(intervals[i][1],newInterval[1])
        i = i + 1
        
    res.append(newInterval)
    # case 3 no overlapping after merging
    
    while i < n:
        res.append(intervals[i])
        i = i + 1
    
    return res




intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]]
newInterval = [4,8]
print(insertIntervals(intervals,newInterval))