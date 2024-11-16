class Queue:
    
    def __init__(self):
        self.stack1 = []
        self.stack2 = []
        
    def push(self,val):
        
        while len(self.stack1) != 0:
            self.stack2.append(self.stack1[-1])
            self.stack1.pop()
        
        
        self.stack1.append(val)
        
        while len(self.stack2) != 0:
            self.stack1.append(self.stack2[-1])
            self.stack2.pop()
        
    def pop(self):
        if len(self.stack1) == 0:
            return -1
        
        frontElement = self.stack1[-1]
        self.stack1.pop()
        
        return frontElement
    
    def isEmpty(self):
        if len(self.stack1) == 0:
            print("queue is Empty")
        else:
            print("Queue is not Empty")