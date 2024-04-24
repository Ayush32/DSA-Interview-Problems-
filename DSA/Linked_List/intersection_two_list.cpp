class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        /* Approach 1 - Brute Force Approach
        we know intersection means a common attr present in both entities, if we take node value as a common 
        attr then it will be not as intersection point, so we can think of something diff like,
        node itself is a common attri
        for this, keep any on of the list to check the nodes present in the other list or  not,
        we take list2
        and we iterate through the list1
        check if then nodes are same if yes, we got our intersection point
        if not continue iteration,
        if the iteration is complete and we did not get any intersection point,
        then we can there is not intersection between the two list
        and we return  NULL
        
        T.C - O(N*M), N be the no. of nodes in head1 and M be the no. of nodes in Head2
        S.C - O(1)
        */
//         while(head2 != NULL) {
//             ListNode* temp = head1;
//             while(temp != NULL){
//                 // if both nodes are same
//                 if(temp ==  head2)
//                     return head2;
                
//                 temp = temp->next;
//             }
//             head2 = head2->next;
//         }
//         return NULL;
        
        /*
        Approach 2
        Using Hashing
        we can improve brute-force solution, bascially in 1st approach we are searching of nodes are present in both list or not,
        we can do the same thing using hashing,
        Hasing take O(1) for searching
        Iterate through the list1 and push all the nodes of list1 into hashtable
        then, again iterate through the list2 and search the nodes of list2 is present in hashtable 
        or not if it is present we return the node and we can say we get out first intersection node
        and if there is no node present the match with list2 then there is no intersection point,
        T.C - O(N + M)
        S.C - O(N)
        */
//         set<ListNode*>s;
        
//         while(head1 != NULL) {
//             s.insert(head1);
//             head1 = head1->next;
//         }
        
//         while(head2 != NULL) {
//             if(s.find(head2) != s.end())
//                 return head2;
            
//             head2 = head2->next;
//         }
//         return NULL;
        
        ListNode* d1 = head1;
        ListNode* d2 = head2;
        
        while(d1 != d2) {
            // d1 = d1 == NULL ? head2 : d1 = d1->next;
            // d2 = d2 == NULL ? head1 : d2 = d2->next;
            if(d1 == NULL)
                d1 = head2;
            else
                d1 = d1->next;
            
            if(d2 == NULL)
                d2= head1;
            else
                d2 = d2->next;
            
        }
        return d1;
 }
};