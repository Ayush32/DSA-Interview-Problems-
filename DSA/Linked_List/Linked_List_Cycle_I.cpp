// Problem - 2 - Linked List Cycle - I

    // Approach 1 - Using Hashtable
    /*
    we need to keep track of  all the node,that we have visited till now,so that once we visit the same node again, we can say that there is cycle detected
    1- store the nodes in hashtable
    2 - iterate over the list
    3 - if the current node is already present in hashtable then we return true, that cycle is detected
    4 - it the current node is not present then we can say that this is the first we visit this node and we have to insert this node into hashtable.
    5- if we reach the end of the list and there is no cycle detected we return false;
    T.C - O(N),
    S.C - O(N)
    */
        unordered_set<ListNode*>s;
        ListNode* curr = head;
        while(curr != NULL) {
            if(s.find(curr) != s.end())
                return true;
            s.insert(curr);
            curr = curr->next;
        }
        return false;
        
        /*
        Approach 2 - using Tortoise Approach or Two pointer
        1 - We take two pointer slow and fast,both pointing each of the head list.
        2 - move slow by one step and fast by 2 step
        3- iterate the list until fast pointer become null or 
        4 - at some moment slow and fast pointer collide then we can say that cycle is present/
        */
        if(head == NULL)
            return false;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                return true;
        }
        return false;