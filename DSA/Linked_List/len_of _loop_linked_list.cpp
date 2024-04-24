/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    // Write your code here
     // Approach -2 using Two Pointer
//         T.C - O(N)
        // S.C - (1)
         if(head == NULL)
            return 0;
        Node* slow = head;
        Node* fast = head;
        Node* entry = head;
        int len = 1;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
            
            if(slow == fast){
                slow = slow->next; // after slow and fast colide move slow by one step
            
                while(slow != fast){  // run the loop untile slow and fast again collide
                    slow = slow->next; // move slow by one step
                    len++; // increment len
                }
                return len;
            }
        }
        return 0;
}
