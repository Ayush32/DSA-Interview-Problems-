#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    queue<int> q;
    int currentSize;

    Stack()
    {
        currentSize = 0;
    }
    void push(int x)
    {
        currentSize++;
        q.push(x);
        int s = q.size();
        for(int i = 0;i < s;i++)
        {
            q.push(q.front());
            q.pop();
        }
        // swap(q1, q2);
    }

    void pop()
    {
        if (!q.empty())
        {
            currentSize--;
            int x = q.front();
            q.pop();
        }
        return;
    }
    int size()
    {
        return currentSize;
    }
    int top()
    {
        if (!q.empty())
            return q.front();
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