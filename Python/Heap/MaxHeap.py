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
    
'''To implement a max-heap, you can negate the values when inserting and retrieving elements. This is because negating the values reverses the order of comparison.'''

max_heap = []

l = [6,10,1,14,7]

heapq.heappush(max_heap,-6)
heapq.heappush(max_heap, -10)
heapq.heappush(max_heap, -1)
heapq.heappush(max_heap, -14)
heapq.heappush(max_heap, -7)

'''or we can do by this

for i in range(len(l)):
    heapq.heappush(max_heap,-l[i])
'''

# Max-heap property ensures the largest element is always at index 0 with  Negate again to get the original values
print("Max-Heap:", [-x for x in max_heap])  # Output: [1, 7, 14, 10]

print(-heapq.heappop(max_heap))
print(-heapq.heappop(max_heap))