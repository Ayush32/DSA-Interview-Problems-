#include<bits/stdc++.h>
using namespace std;

 //insert node at the beginning of the linkedlist

Node* insertAtbegining(Node* head,int val)
{
    // 5 -> 6 -> 3 -> 5 -> 8
    // new node value = 2
    // new List - 2 -> 5 -> 6 -> 3 -> 5 -> 8
    Node* newNode = new Node(val); // create new node with given value
    newNode->next = head; // make the next of new node as head
    head = newNode; // make newNode as new Head

    return head;
}

//insert node at the end of the linkedlist 

Node* insertAtEnd(Node* head,int val)
{
    //insert node at the end of the linkedlist
    // 5 -> 6 -> 3 -> 5 -> 8 -> NULL
    // new node value = 2
    // new list -  5 -> 6 -> 3 -> 5 -> 8 -> 2
    Node* newNode = new Node(val); // create new node with given value
    
    
    newNode->next = NULL; // make the next pointer of newNode as NULL to show the end of Linked List

    // if linked list is empty
    if(head == NULL){
        head = newNode;
        return;
    }


    // we have to traverse to the end of the linkedlist to find the last node
    Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = newNode; // change the next pointer of last node from NULL to the new Node
    newNode->next = NULL; // make the next pointer of newNode as NULL to show the end of Linked List

    return head;
}

//insert node at the at specific postion  int the linkedlist 
/*
input: 3->5->8->10, data = 2, position = 2
Output: 3->2->5->8->10
*/

Node* atSpecificPosition(Node* head, int val,int position)
{
    // Write your code here
    if(head == NULL)
        return NULL;
    
    Node* newNode = new Node(val);
    
    // is position is equal to 0, means we have to insert new node at the beginning of the list

    if(pos == 0)
    {
        newNode->next = head; // make the next of new node as head
        head = newNode; // make newNode as new Head
        return head;
    }
    // random position
    // first we have to traverse the until we get the position where we have to insert that node 
    Node *temp=head;

    int i=1;

    while(i<pos)
    {

        temp=temp->next;

        i++;
    }
    // Node* newNode =new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;
    return head
}

int main()
{

}