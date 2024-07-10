#include <bits/stdc++.h>
using namespace std;

// Intuition: As we know stack works on the principle of last in first out, 
// so we have to put elements in an array such that it keeps track of the most recently inserted element. 
// Hence we can think of using a Top variable which will help in keeping track of recent elements inserted in the array.

class Stack
{
    int size;
    int *arr;
    int top;

public:
    Stack()
    {
        top = -1;
        size = 1000;
        arr = new int[size];
    }
    void push(int x)
    {
        top++;
        arr[top] = x;
    }
    int pop()
    {
        int x = arr[top];
        top--; // decrement the top variable after popping the elements
        return x;
    }

    bool isEmptyStack()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    int Top()
    {
        return arr[top]; //  return the top index
    }
    int Size()
    {
        return top + 1;  // because we assign top  = -1 so we will return the siz + 1 of stack
    }
};

int main()
{

    Stack s;
    s.push(6);
    s.push(3);
    s.push(7);

    cout << "Top of stack is before deleting any element " << s.Top() << endl;
    cout << "Size of stack before deleting any element " << s.Size() << endl;
    cout << "The element deleted is " << s.pop() << endl;
    cout << "Size of stack after deleting an element " << s.Size() << endl;
    if (s.isEmptyStack() == true)
        cout << "Stack is Empty";
    else   
        cout << "Stack is not Empty";

    return 0;
}