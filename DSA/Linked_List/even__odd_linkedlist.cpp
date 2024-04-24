class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // T.C - O(N)
        // S.C - O(N/2) + O(N/2) = O(N)
        ListNode* evenList = new ListNode(-1);
        ListNode* even = evenList;
        ListNode* oddList = new ListNode(-1);
        ListNode* odd = oddList;
        ListNode* curr = head;
        
        int count = 1; // act like a index
        
        while(curr != NULL)
        {
            if(count % 2 != 0){ // if the index is odd make new node from curr->val add next to odd list
                ListNode* newNode = new ListNode(curr->val);
                odd->next = newNode;
                odd = odd->next;
            }
            else {  // if the index is even make new node from curr->val add next to even list
                ListNode* newNode = new ListNode(curr->val);
                even->next = newNode;
                even = even->next;
            }
            count = count + 1;
            curr = curr->next;    
        }
        odd->next = evenList->next;  // joined even list after the odd list
        even->next = NULL; // make next  of last node as NULL
        return oddList->next;

        Approach -2 - using Pointer
        T.C - O(N)
        S.C - (N)

        if(head == NULL)
            return NULL;
        ListNode* evenList = head->next; // point head of next to evenList  , and second node is even
        ListNode* oddList = head; // point head to oddList because first node is odd

        ListNode* even = evenList;

        while(even && even->next){
            
            oddList->next = oddList->next->next; // we know there is gap of 1 between odd and even we 
            even->next = even->next->next;
            // oddList->next = t1;
            // even->next = t2;
            oddList = oddList->next;
            even= even->next;

        }
        oddList->next = evenList;
        return head;
    }
};