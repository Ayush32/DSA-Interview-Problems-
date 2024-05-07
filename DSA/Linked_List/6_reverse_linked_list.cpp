class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     ListNode* curr = head;
     ListNode* prev= NULL;
     ListNode* next = NULL;

     while(curr != NULL)
     {
        next = curr->next; // store next 
        // reverse current node's pointer 
        curr->next = prev; // point curr->next to prev(i.e initially null) / 
        // move pointer one position head
        prev = curr;
        curr = next;
     }
     return head;
}

    // REcursion - T.C - O(N),S.C- (N) recusrion stack space
    ListNode* reverse(Node* head){
    if(head == NULL || head->next == NULL)
        return head;

    // divide the linkedlist into two part
    // rest part
    ListNode* rest = reverseList(head->next);
    head->next->next = head; // connect the rest linkedlist to the first node

    head->next = NULL; // first part connect next of first to NULL

    return rest;
    }
};

// 1->2->3->4->5
// Null<-1<-2<-3<-4<-5 --> head
// curr  = head, next = NULL, prev = NULL
// next = curr->next
// curr->next = prev // change the direction of pointer from right direction to left direction
// prev = curr  // new tail
// next = curr
