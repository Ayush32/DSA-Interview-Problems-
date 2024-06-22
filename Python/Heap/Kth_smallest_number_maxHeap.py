import heapq

myList = [7, 10, 4, 3, 20, 15]
k = 3
maxHeap = []
for num in myList:
        # Push the negative of the current element onto the max heap
        heapq.heappush(maxHeap, -num)

        # If the size of the max heap exceeds K, remove the largest element
        if len(maxHeap) > k:
            heapq.heappop(maxHeap)


print(-1 * maxHeap[0])
