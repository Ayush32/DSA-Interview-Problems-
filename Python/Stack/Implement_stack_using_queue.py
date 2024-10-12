from _collections import deque

# Stack Class that acts as a queue


class Stack:
    def __init__(self):
        self.q = deque()

    # Push operation
    def push(self, data):
        # Get previous size of queue
        s = len(self.q)

        # Push the current element
        self.q.append(data)

        # Pop all the previous elements and put them after
        # current element
        # 1 ,2
        # 2,1
        # 1,2
        for i in range(s):
            self.q.append(self.q.popleft())  # pop from front and push again into queue

    # Removes the top element
    def pop(self):
        if (not self.q):
            print("No elements")
        
        return seq.popleft()

    # Returns top of stack
    def top(self):
        if (not self.q):
            return
        return self.q[0]

    def size(self):
        return len(self.q)


if __name__ == '__main__':
    st = Stack()
    st.push(1)
    st.push(2)
    print(st.pop())
    # st.push(3)
    print("current size: ", st.size())
    print(st.top())
    st.pop()
    print(st.top())
    st.pop()
    print(st.top())
    print("current size: ", st.size())