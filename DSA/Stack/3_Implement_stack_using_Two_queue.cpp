#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    queue<int> q1, q2;
    int currentSize;

    Stack()
    {
        currentSize = 0;
    }
    void push(int x)
    {
        currentSize++;
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    void pop()
    {
        if (!q1.empty())
        {
            currentSize--;
            int x = q1.front();
            q1.pop();
        }
        return;
    }
    int size()
    {
        return currentSize;
    }
    int top()
    {
        if (!q1.empty())
            return q1.front();
        return -1;
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(6);
    s.push(7);
    cout << s.size() << endl;
    s.pop();

    cout << s.top() << endl;
    cout << s.size() << endl;
    return 0;
}