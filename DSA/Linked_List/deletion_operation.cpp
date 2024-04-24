#include<bits/stdc++.h>
using namespace std;

 //delete node at the beginning of the linkedlist

Node* insertAtbegining(Node* head)
{
    // 5 -> 6 -> 3 -> 5 -> 8
    // delete node = 5
    // O/ p  - 6 - > 3 -> 5 -> ->8
    // new List -5 -> 6 -> 3 -> 5 -> 8
    // Node* newNode = new Node(val); // create new node with given value
    // newNode->next = head; // make the next of new node as head
    // head = newNode; // make newNode as new Head
    head = head->next;
    return head;
}

Node* deleteAtEnd(Node* head)
{
    //insert node at the end of the linkedlist
    // 5 -> 6 -> 3 -> 5 -> 8 -> NULL
    // new list -  5 -> 6 -> 3 -> 5 -> null
    // Node* newNode = new Node(val); // create new node with given value
    
    

    // if linked list is empty
    if(head == NULL){
        head = newNode;
        return;
    }


    // we have to traverse to the end of the linkedlist to find the last node
    Node* second_lastNode = head;
    while(second_lastNode != NULL){
        second_lastNode = second_lastNode->next;
    }
    delete(second_lastNode);
    second_lastNode->next = NULL; // change the next pointer of second last node to NULL
    

    return head;
}