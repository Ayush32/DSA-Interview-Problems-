import heapq

def frequencySort(nums):
    hashmap = dict()
    for i in range(len(nums)):
        if nums[i] not in hashmap:
            hashmap[nums[i]] = 1
        else:
            hashmap[nums[i]] += 1
    print(hashmap)
    res = []
    max_heap = []
    for ele,freq in hashmap.items():
        heapq.heappush(max_heap,[freq , -ele])
    print(max_heap)
    while max_heap:
        freq,ele = heapq.heappop(max_heap)
        for i in range(freq):
            res.append((ele)*-1)
    return res
    


arr = [1,2,7,9,8,1,3,8,2]
k = 2
print(frequencySort(arr))
        
