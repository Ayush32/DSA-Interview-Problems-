import heapq

myList = [9,5,4,1,3,2]
heapq.heapify(myList)  # turn mylist into min heap
# minheap = node is always smaller or equal to its children
# maxheap = node should be greater or equal to its children
print(myList)
heapq.heappush(myList,10)
x = heapq.heappop(myList) #pop and return smallest
print(x)


'''A min-heap ensures that the smallest element is always at the root.'''

import heapq

# Create an empty heap
min_heap = []

# Push elements into the heap
heapq.heappush(min_heap, 10)
heapq.heappush(min_heap, 1)
heapq.heappush(min_heap, 14)
heapq.heappush(min_heap, 7)

# Min-heap property ensures the smallest element is always at index 0
print("Min-Heap:", min_heap)  # Output: [1, 7, 14, 10]

# Pop elements in ascending order
print(heapq.heappop(min_heap))  # Output: 1
print(heapq.heappop(min_heap))  # Output: 7
print(heapq.heappop(min_heap))  # Output: 10

# Min-heap property ensures the smallest element is always at index 0
print("Min-Heap:", min_heap)  # Output: [1, 7, 14, 10]

# Pop elements in ascending order
print(heapq.heappop(min_heap))  # Output: 1
print(heapq.heappop(min_heap))  # Output: 7
print(heapq.heappop(min_heap))  # Output: 10
