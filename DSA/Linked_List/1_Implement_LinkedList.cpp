#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data; // 
        Node* next;
};

class LinkedList {
    // constructor
public:
    LinkedList() 
    {
        head = NULL;
    }
    void addNode(int val);
    void display();
private:
    Node* head;

    // function to add new Node in linkedlist
    
    
};
void LinkedList::addNode(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;
        if(head == NULL)
        {
            head = newNode;
        }
        else {
            Node* temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    
    void LinkedList::display()
    {
        if(head == NULL)
            cout << "LinkedList is Empty";
        else {
            Node* temp = head;

            while(temp != NULL)
                {
                    cout << temp->data << " ";
                    temp = temp->next;
                }
        }
    }

int lengthOfList(Node* head)
{
    int len = 0;

    while(head != NULL)
    {
        len++;
        head=  head->next;
        
    }
    return len;
}
int main()
{
    LinkedList* list = new LinkedList();
    list->addNode(10);
    list->addNode(20);
    list->addNode(30);
    list->addNode(40);
    list->addNode(50);
    cout << lengthOfList( *list);
    return 0;


} 

