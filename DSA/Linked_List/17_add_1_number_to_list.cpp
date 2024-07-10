include <bits/stdc++.h>

Node* reverse(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

// Approach - 1 9991 - 
/* or example 1999 is represented as (1-> 9-> 9 -> 9) and adding 1 to it should change it to (2->0->0->0) 
    Start traversing linked list from leftmost node and add 1 to it. If there is a carry, move to the next node. Keep moving to the next node while there is a carry.
    after traversal of whole linkedlist, we check the carry if there is carry we make the new node with value carry
    and connect that newnode after the rightmost node of linkedlist
    
Reverse modified linked list and return head.
*/


LinkedListNode<int>* reverse(LinkedListNode<int> *head)
{
    if(head == nullptr)
        return nullptr;
    
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = nullptr;
    LinkedListNode<int>* next = nullptr;

    while(curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

LinkedListNode<int>* addOneToList(LinkedListNode<int> *head)
{
    //Write your code here
    LinkedListNode<int>* reverseList = reverse(head);
    int carry = 1;
    LinkedListNode<int>* temp;
    LinkedListNode<int>* curr  = reverseList->next;
    while(curr != nullptr && carry)
    {
        int value = curr->data;
        value = value + carry;
        carry = value / 10;
        value = value % 10;
        curr->data = value;
        temp = curr;
        curr = curr->next;        
    }
    if(carry != 0)
    {
        temp->next = new LinkedListNode<int>(carry);
        
    }
    return reverse(reverseList);


}
