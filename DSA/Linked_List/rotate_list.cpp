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
    ListNode* rotateRight(ListNode* head, int k) {
        
        // T.C - O(N) - length + O(end)->auxilary  = O(N)
        // S.C - O(1)
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        int length = 1;
        ListNode* curr = head;
        // find length of the linkedlist
        while(curr->next != NULL)
        {
            curr = curr->next;
            length++;
        }
        curr->next = head; // make the linkedlist circular connect the next pointer of last node to the first node
        // int newRotation = length;

        k = k % length; // take mode of length if k greater than k then we dont have to rotate the linkedlist again and again it will reduce our time complexity
        int end = length - k;  // find the end node where we have to rotate our linkeddlist
        while(end--)  // traverse linklist until end become zero.
        {
            curr = curr->next;
        }
        head = curr->next; // make the endth node as head of the linekdlist 
        curr->next = NULL; // make the next of last node as NULL
        
        return head;
        
        
        
    }
};