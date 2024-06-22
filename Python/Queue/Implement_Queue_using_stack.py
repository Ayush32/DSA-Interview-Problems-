from queue import LifoQueue  # work as stack in python
class Queue:

    def __init__(self):
        self.stack1 = LifoQueue()
        self.stack2 = LifoQueue()

        # self.capacity = c

    # function to insert a new element from rear side
    def queueEnqueue(self,newElement):
            
            while not self.stack1.empty():
                self.stack2.put(self.stack1.get())
            

            self.stack1.put(newElement)

            while not self.stack2.empty():
                self.stack1.put(self.stack2.get())


    
        
    def queueDequeue(self):
        if self.stack1.empty():
            print("Queue is Empty Deletion is not possible / underflow Condition")

        else:
            self.stack1.get()
            

    def queueDisplay(self):
        if len(self.stack1) == 0:
            print("Queue is Empty")
        
        for i in range(0,len(self.stack1)):
            print(self.stack1[i], sep = "/")

    def queueFront(self):
        if self.input.qsize() == 0:
            print("Stack is empty")
        return self.input.queue[-1]

if __name__ == '__main__':
    # Create a new queue of
    # capacity 4
    q = Queue()

    # Print queue elements
    q.queueDisplay()

    # Inserting elements in the queue
    q.queueEnqueue(3)
    q.queueEnqueue(4)

    q.queueDequeue()
    q.queueEnqueue(5)
    # q.queueEnqueue(50)
    

    print("after inserting all element")

    # Print queue elements
    q.queueDisplay()
    print(q.queueFront())

    # Insert element in queue
    # q.queueEnqueue(60)

    # # Print queue elements
    # q.queueDisplay()

    # q.queueDequeue()
    # q.queueDequeue()
    # print("\n\nafter two node deletion\n")

    # # Print queue elements
    # q.queueDisplay()

    # # Print front of queue
    # q.queueFront()