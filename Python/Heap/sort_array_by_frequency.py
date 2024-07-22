import heapq
class Solution:
    def frequencySort(self, nums):
        hashmap = dict()
        for i in range(len(nums)):
            if nums[i] not in hashmap:
                hashmap[nums[i]] = 1
            else:
                hashmap[nums[i]] += 1
        res = []
        heap = []
        for i in hashmap:
            heapq.heappush(heap,[hashmap[i] , -i])
        
        while heap:
            value,key = heapq.heappop(heap)
            for i in range(value):
                res.append((key)*-1)
        return res
    


        
