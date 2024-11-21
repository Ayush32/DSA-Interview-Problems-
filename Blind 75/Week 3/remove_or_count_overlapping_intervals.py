class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort()
        tempInterval = intervals[0]
        mergeIntervals = []        
          

        for i in range(1,len(intervals)):
            if intervals[i-1][1] > intervals[i][0]:
                overlappedInterval += 1
                intervals[i][1] = min(intervals[i-1][1],intervals[i][1])

        # mergeIntervals.append(tempInterval)

        return overlappedInterval
        