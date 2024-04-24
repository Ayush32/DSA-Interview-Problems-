#include<bits/stdc++.h>
using namespace std;

class Queue {
    stack<int>s1,s2;

    public:

    void enqueue(int val)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(val);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void dequeue()
    {
        if(s1.empty())
            {
                return;
            }
        s1.pop();
    }
    int front()
    {
        int x = s1.top();

        return x;
    }
};


int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(2);
    q.enqueue(4);
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    return 0;

}