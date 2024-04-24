class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        /*
        Approach 1
         1)- find the length of linkedlist
         2) - substract the length from n and make the newLength
         3) traverse the linkedlist until newLength become zero
         4) - remove the next pointer link of current node and point the next of next node
        T.C - O(N)
        S.C - O(1);
        */
        
        int length = 0;
        ListNode* curr = head;
        while(curr != NULL)
        {
            length++;
            curr = curr->next;
        }
        if(length == n)
        {
            return head->next;
        }
        int nodeToRemoved = length - n; // new length
        
        curr = head;
        
        for(int i = 1;i<nodeToRemoved;i++){
            curr = curr->next;
        }
        
        curr->next = curr->next->next;
        
        return head;
    }

    1->2->3->4->5->6

    // Approach 2 -Deleting the Nth node from last is basically the same as deleting (length-B+1) from the start
        /*
        1) - we Take Two Pointers slow and fast
        2) - we traverse the linked through fast pointer until the fast pointer reaches the nth node
        3)-  if fast is already pointing to null it means there is only one node in the the linkedlist and we have to remove that and return the null 
        4)- slow pointer pointing the head of the list, we traverse until next of fast point pointer is not null  and move slow by one step and fast by one step
        5)- the moment when the loop terminates slow pointer poin the length - n  +1 nodes
        then , we remove the link of next of slow pointer and attach/ point the next of slow pointer to the next of next node. -> slow->next = slow->next->next;
        T.C - O(N)
        S.C - O(1)
        */

    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* slow = head;
        ListNode* fast = head;
        int i = 1;
        while(i <= n){
            i++;
            fast = fast->next;
        }
        
        if(fast == NULL)
            return head->next;
        
        while(fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        
        return head;
    }
};