class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d = dict()

        for i in range(len(nums)):
            if nums[i] not in d:
                d[nums[i]] = 1
            else:
                d[nums[i]] += 1
        
        max_heap = []

        for ele,freq in d.items():
            heappush(max_heap,[freq,ele])

            if len(max_heap) > k:
                heappop(max_heap)

        res = []
        while max_heap:
            freq,ele = heappop(max_heap)

            res.append(ele)

        return res


        s