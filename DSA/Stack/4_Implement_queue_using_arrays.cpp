#include<bits/stdc++.h>
using namespace std;
class Queue {
    int rear;
    int front;
    int *arr;
    int size;
public:
    Queue(){
        rear = 0;
        front = 0;
        size = 5;
        arr = new int[size];
    }

    void enqueue(int val)
    {
        if(rear == size) {
            cout << "Queue is Full " << "Insertion is not possible" << endl;
            return;
        }
        if(rear < size)
        {
            arr[rear] = val;
            rear++;
        }
    }
    void dequeue(){
        if(rear == front)
        {
            cout << "Queue is Empty " << "Deletion is not possible" << endl;
            return;
        }
        for(int i = 0;i < rear- 1;i++)
        {
            arr[i] = arr[i+1];
        }
        rear--;
    }
    void queueFront()
    {
        if(front== rear){
            cout << "queue is Empty" << endl;
            return;
        }
        
        cout << arr[front] <<  endl;;
    }
};

int main()
{
    Queue q;
    q.enqueue(6);
   q.enqueue(5);
   q.enqueue(9);
   q.enqueue(7);
   q.enqueue(8);
   q.enqueue(3);

    q.dequeue();
    q.queueFront();
    
    q.dequeue();
    q.queueFront();
    return 0;
}