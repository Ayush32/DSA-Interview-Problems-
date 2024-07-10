import heapq

myList = [9,5,4,1,3,2]
heapq.heapify(myList)  # turn mylist into min heap
# minheap = node is always smaller or equal to its children
# maxheap = node should be greater or equal to its children
print(myList)
heapq.heappush(myList,10)
x = heapq.heappop(myList) #pop and return smallest
print(x)