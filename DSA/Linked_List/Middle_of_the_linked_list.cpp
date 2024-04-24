/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        // Approach 1 - find the length of list and traverse the half len of the list and return middle.
        /*  take curr pointer and assign head to the for traversing over the linkedlist and len variable assign             to zero
        step 1 - calculate the length of the linkedlist
            step 2- divide the length of list by 2
            step 3 - traverse the list until len become zero 
            and when the loop is terminate we stand at the midddle of list. and we return
            
            T.C - O(N) + O(n/2).
            S.C - O(1)
        */ 
        
        /*
        Intuition -
        1) Assume there is there is race of rabbit and turtle
        2)- turtle move slowly and rabbit move faster than turtle
        3)- the race will start from point s to point e, we can see clearly rabbit move 2 times of turtle 
        4) then rabbit will finish the race first while turtle reach the half distance of rabbit (i.e 2 times)
        
        Approach 2 - 
        1) Take two pointer node slow and fast, both initialize with head (i.e pointing head)
        2) slow move by 1 steps and fast moves by 2 steps
        3) - run the loop until fast pointer reaches null and next of fast pointer reached null
        4) we can see that the slow pointer pointing middle of the LinkedList after loop is terminates;
        */
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
};