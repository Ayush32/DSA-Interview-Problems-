from queue import LifoQueue  # work as stack in python
class Queue:

    def __init__(self):
        self.stack1 = []
        self.stack2 = []

        # self.capacity = c

    # function to insert a new element from rear side
    def queueEnqueue(self,newElement):
            
            while len(self.stack1) != 0:
                self.stack2.append(self.stack1[-1])
            

            self.stack1.append(newElement)

            while len(self.stack2) != 0:
                self.stack1.append(self.stack2[-1])


    
        
    def queueDequeue(self):
        if len(self.s1) == 0: 
            print("Queue is Empty Deletion is not possible / underflow Condition")

        
     
        # Return top of self.s1 
        x = self.stack1[-1] 
        self.stack1.pop() 
        return x
            

    def queueDisplay(self):
        # if len(self.stack1) == 0:
        #     print("Queue is Empty")
        
        # for i in range(0,len(self.stack1)):
        pass
        #     print(self.stack1[i], sep = "/")

    def queueFront(self):
        if len(self.stack1) == 0:
            print("Stack is empty")
        return self.stack1[-1]

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