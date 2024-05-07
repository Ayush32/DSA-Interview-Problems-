//Approach - 1 
public:
    bool isPalindrome(ListNode* head) {
        // Approach - We can think of data structure which store this list in reverse order,
        // from this we get an idea we can stack data structure which works on LIFO order,
        // it means if store the node value of list in stack then we again traverse the list and compare
//         the current node value with the value at top of stack if it match/equal we move the next node and compare, untile we reaches end of the list, we return true, if the value at the top of stack and current node value is not matached we return false, and we can say it is not out palindrome linkedlist.
        
        // T.C O(N) + O(N), n will be the number of nodes, O(N)-> we traverse the entire list to insert node value into the stack, other O(N), for comparing the node->val with top of the stack
//         S.C - O(N), N will be number of nodes, that inserted into stack.
        
        // middle of the linkedlist
        
        stack<int>s;
         ListNode* temp = head;
         
         while(temp != NULL) {
             s.push(temp->val);
             temp = temp->next;
         }
         
         temp = head;
         while(temp != NULL)
         {
             int i = s.top();
             s.pop();
             
             if(i != temp->val)
                 return false;
             
             temp = temp->next;
         }
         
         return true;
};

//Approach - 2
class Solution {
    private:
	//getMiddle function
     ListNode* getMiddle(ListNode* head){
     ListNode* slow=head;
     ListNode* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow;
    }
    
	//reverse function
    ListNode* reverse(ListNode* head){
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextptr;
        
        while(curr!=NULL){
            
            nextptr=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=nextptr;
            
        }
        
        return prev;
            
        
    }
    
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        
      //get the middle of LL  
     ListNode* middle=getMiddle(head);
        
     //reverse the LL from the next of middle
        
     ListNode* temp=middle->next;
     middle->next=reverse(temp);
     
     //compare the elements from the first and second half of LL
        
     ListNode* head1=head;
     ListNode* head2=middle->next;
     
     while(head2!=NULL){
         if(head1->val!=head2->val){
             return false;
         }
         head1=head1->next;
         head2=head2->next;
     }
    
     //reverse the LL back to its original form
     temp=middle->next;
     middle->next=reverse(temp);
     
        
     return true;
    
        
    }
}; 
