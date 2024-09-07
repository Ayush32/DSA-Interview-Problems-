class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
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
        