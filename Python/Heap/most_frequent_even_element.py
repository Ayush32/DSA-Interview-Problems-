class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        d = dict()
        for i in range(len(nums)):
            if nums[i] not in d:
                d[nums[i]] = 1
            else:
                d[nums[i]] += 1
            
        max_heap = []
        for ele,freq in d.items():
            heappush(max_heap,[-freq,ele])
        frequent_element = -1
        maximum_even_freq = float('-inf')
        while max_heap:
            freq, ele = heappop(max_heap)
            if ele % 2 == 0:
                if maximum_even_freq < abs(freq):
                    maximum_even_freq = max(maximum_even_freq,-freq)
                    frequent_element = ele
        
        if frequent_element == -1:
            return -1
        return frequent_element 

        