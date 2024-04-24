// 1171. Remove Zero Sum Consecutive Nodes from Linked List

// Given the head of a linked list, we repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences.

// After doing so, return the head of the final linked list.  You may return any such answer.

 

// (Note that in the examples below, all sequences are serializations of ListNode objects.)

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        // Approach - 1 - Using Vector
        /**/
        
        int sum = 0;
        ListNode* dummyList = new ListNode(-1);
        ListNode* curr = dummyList;
        dummyList->next = head;
        unordered_map<int,ListNode*>mp;
        
        while(curr){
            sum = curr->val + sum;
            
            if(mp.count(sum))
            {
                curr=mp[sum]->next;
                int p=sum+curr->val;
                while(p!=sum)
                {
                    mp.erase(p);
                    curr=curr->next;
                    p+=curr->val;
                }
                mp[sum]->next=curr->next;
            }
            else
            {
                mp[sum]=curr;
            }
            curr=curr->next;

        }
        return dummyList->next;
        // 1,2,-3,3,1
    }
};