class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // T.C - O(N + M) // n - size of l1 , M - size of l2;
        // S.C - O(N + M) 
        // 
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        int carry = 0;
      
        while(l1 != NULL || l2 != NULL || carry){
             int sum = 0;
            
            if(l1 != NULL){ //
                sum += l1->val; // add node value of l1 in sum
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;  // add node value of l2 in sum
                l2 = l2->next;
            }
            sum += carry;  // add carry in sum
            carry = sum / 10; // if the sum is greater than 9 then divide the sum store the quotient
            ListNode* newNode = new ListNode(sum % 10);  // make new node with sum value, but check whether the sum is greater than 9 if is it will store the remainder
            temp->next = newNode;
            temp = temp->next;
        }
        return dummy->next;
    }
};