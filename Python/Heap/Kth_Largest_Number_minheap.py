import heapq

myList = [7,24, 10, 4, 3, 20, 15]
k = 3
minHeap = []

for i in myList:
    heapq.heappush(minHeap,i)

    if len(minHeap) > k:
        heapq.heappop(minHeap)

print(minHeap[0])