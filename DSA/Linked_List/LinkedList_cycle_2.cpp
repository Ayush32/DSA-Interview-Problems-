class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // T.C - O(N);
        //S.C - O(N)
//         unordered_set<ListNode*>s;
        
//         ListNode* curr = head;
        
//         while(curr != NULL)
//         {
//             if(s.find(curr) != s.end()){
//                 return curr;
//             }
//             else {
//                 s.insert(curr);
//             }
//             curr = curr->next;
//         }
        // Approach -2 using Two Pointer
//         T.C - O(N)
        // S.C - (1)
         if(head == NULL)
            return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* entry = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
            
            if(slow == fast){
                while(slow != entry){
                    slow = slow->next;
                    entry = entry->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};