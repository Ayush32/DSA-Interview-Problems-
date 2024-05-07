class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr != NULL){
             next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    // Approach  -- 1
    /*
    Intuition: Keep track of the carry using a variable and simulate digits-by-digits sum starting from the head of the list, 
    which contains the least significant digit. Just like how you add two digits on piece of paper same thing we are doing for linkedlist add both linkedlist value if the
    sum is greater than 9 we sum / 10 to get carry and the last digit by sum % 10 and make the new node connect to our list ans, move to the next  node add both linkedlist value and carry perform same operation for carry
    Create a dummy node which is the head of new linked list.
    Create a node temp, initialise it with dummy.
    Initialize carry to 0.
    Loop through lists l1 and l2 until you reach both ends, and until carry is present.
    Set sum=l1.val+ l2.val + carry.
    Update carry=sum/10.
    Create a new node with the digit value of (sum%10) and set it to temp node’s next, then advance temp node to next.
    Advance both l1 and l2.
    Return dummy’s next node.
     */
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Approach - 1 - Using Stack + reverse a linkedlist
        // T.C - O(N) + O(M) + O(N + M) + O(N+M)(revese a linkedlist) ==> O(N + M)
        //S.C = O(N + M)
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        stack<int>s1;
        stack<int>s2;
        int carry= 0;
        ListNode* list1 = l1;
        ListNode* list2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        while(list1 != NULL){ // O(N)
            s1.push(list1->val);
            list1 = list1->next;
        }
        while(list2 != NULL){ // O(M)
            s2.push(list2->val);
            list2 = list2->next;
        }
        list1 = l1;
        list2 = l2;
        
        while(!s1.empty() || !s2.empty() || carry){ 
            int sum = 0;
            if(!s1.empty()) {
                sum += s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                sum += s2.top();
                s2.pop();
            }
            sum += carry;
            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10);
            
            temp->next = newNode;
            temp = temp->next;
        }
        
        ListNode* ans = reverse(dummy->next);
        return ans;
    }
    // Appraoch 2 -
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Approach - 1 - Using Two Pointer + reverse a linkedlist
        // T.C - O(N + M) + O(N+M)(revese a linkedlist) ==> O(N + M)
        //S.C = O(N + M)
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;

        int carry= 0;
        ListNode* list1 = reverse(l1);
        ListNode* list2 = reverse(l2);
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        
        while(list1 != NULL || list2 != NULL || carry){ 
            int sum = 0;
            if(list1 != NULL) {
                sum += list1->val;
                list1 = list1->next;
            }
            if(list2 != NULL) {
                sum += list2->val;
                list2 = list2->next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10);
            
            temp->next = newNode;
            temp = temp->next;
        }
        
        ListNode* ans = reverse(dummy->next);
        return ans;
    }
};