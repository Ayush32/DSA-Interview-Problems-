# negate all values to use minheap as max heap

# heappush(heap, ele): This function is used to insert the element mentioned in its arguments into a heap. 
# The order is adjusted, so that heap structure is maintained.

# heappop(heap): This function is used to remove and return the smallest element from the heap. 
# The order is adjusted, so that heap structure is maintained.
# Time complexity: O(n) for heapify, O(log n) push and pop.
import heapq
myList = [9,5,4,1,3,2]
negative_list = [-val for val in myList]
# heapify - convert the iterable into heap data structure
heapq.heapify(negative_list)
x = heapq.heappop(negative_list)
heapq.heappush(negative_list,-9)
for i in negative_list:
    print(-1 * i)
