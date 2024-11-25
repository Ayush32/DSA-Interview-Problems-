import heapq
def topKFrequent(nums,k) :
    d = dict()

    for i in range(len(nums)):
        if nums[i] not in d:
                d[nums[i]] = 1
        else:
            d[nums[i]] += 1
    print(d)    
    min_heap = []
    '''For each item, it pushes a list [freq, ele] onto the heap using heapq.heappush(). 
    This creates a min-heap based on frequency because Python's heapq module implements a min-heap by default.'''
    for ele,freq in d.items():
        heapq.heappush(min_heap,[freq,ele])
        # print(max_heap)
        '''If the size of the heap exceeds k, it pops the smallest element (the one with the lowest frequency) 
        using heapq.heappop(). This ensures that the heap only contains the k most frequent elements.'''
        if len(min_heap) > k:
            heapq.heappop(min_heap)

    # print(max_heap)
    res = []
    while min_heap:
        freq,ele = heapq.heappop(min_heap)

        res.append(ele)

    return res

arr = [1,1,1,3,2,2]
k = 2
print(topKFrequent(arr,k))