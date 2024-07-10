class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        Approach 1 - 
        ListNode* curr = head;
        ListNode* newHead = new ListNode(-1);
        ListNode* temp = newHead;
        
        while(curr != NULL) {
            if(curr->val != val) {
                ListNode* dummy = new ListNode(curr->val);
                temp->next = dummy;
                temp = temp->next;
            }
            
            curr = curr->next;
        }
        return newHead->next;
        
        // approach 2- 
        
        ListNode* temp = head;
        while(temp != NULL)
        {
            if(temp->next && temp->next->val == val) 
            {
                temp->next = temp->next->next;
            }
            else {
                temp = temp->next;
            }
        }
        if(head && head->val == val) # if the first node val is equal to val return head.next
            return head->next;
        // head = temp;
        return head;
    }
};