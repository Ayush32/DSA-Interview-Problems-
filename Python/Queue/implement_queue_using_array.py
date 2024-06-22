class Queue:

    def __init__(self,c):
        self.queue = []
        self.rear = 0
        self.front = 0
        self.capacity = c

    # function to insert a new element from rear side
    def queueEnqueue(self,newElement):
        if(self.rear == self.capacity):
            print("Queue is Full insertion is not possible / Overflow Condition")
        else:
            self.queue.append(newElement)
            self.rear = self.rear + 1
        
    def queueDequeue(self):
        if(self.rear == self.front):
            print("Queue is Empty Deletion is not possible / underflow Condition")

        else:
            self.queue.pop()
            self.rear = self.rear - 1

    def queueDisplay(self):
        if(self.rear == self.front):
            print("Queue is Empty")
        
        for i in range(0,len(self.queue)):
            print(self.queue[i], sep = "/")

    def queueFront(self):
        if(self.rear == self.front):
            print("Queue is Empty", " -1")
        
        return self.queue[self.front]

if __name__ == '__main__':
    # Create a new queue of
    # capacity 4
    q = Queue(4)

    # Print queue elements
    q.queueDisplay()

    # Inserting elements in the queue
    q.queueEnqueue(20)
    q.queueEnqueue(30)
    q.queueEnqueue(40)
    q.queueEnqueue(50)

    # Print queue elements
    q.queueDisplay()

    # Insert element in queue
    q.queueEnqueue(60)

    # Print queue elements
    q.queueDisplay()

    q.queueDequeue()
    q.queueDequeue()
    print("\n\nafter two node deletion\n")

    # Print queue elements
    q.queueDisplay()

    # Print front of queue
    q.queueFront()