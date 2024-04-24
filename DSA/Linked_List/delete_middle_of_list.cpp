Node* deleteMiddle(Node* head){
    // Write your code here.
    //Approach - 1 using length of linkedlist + length/2 -> required two traversal to delete the linkedlist

    // Approach - 2
/*The above solution requires two traversals of the linked list. The middle node can be deleted using one traversal. 
 The idea is to use two pointers, slow_ptr, and fast_ptr. Both pointers start from the head of list.
  When fast_ptr reaches the end, slow_ptr reaches middle. This idea is the same as the one used in method 2 of this post. 
  The additional thing in this post is to keep track of the previous middle so the middle node can be deleted.
*/
    if(head == NULL || head->next == NULL)
        return NULL;
    
    Node* slow = head;
    Node* fast = head;
    Node* prev = head;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = slow->next;
    return head;
}