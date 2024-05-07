class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//     Take Two pointer-> we have to create one dummy list it will have the value zero and point to null, this will be our head of new linkedlist, and another pointer which keep  track of dummy list name temp,
        // l1 is pointing to head of list1
//         l2 is pointing to head of the list2
//        we compare the node val of first list with the node val of list2 and find the smallest one
        // store the data in the new list
        // move the pointer to the next node whose value store in the new list
        // if the node value of second list is smaller than the node val of list1 then we point node of second list to the next of temp
//         repeat it until till any one of the head pointer reached null
        
        // copy remaining node of the list whose head is not null in the new list.
        
        // T.C - O(N+M) let N be the no. of nodes in list1 and M be the no. of nodes in list2
        // S.C - O(N+M) becase we creating another list which stores (N+M) nodes in the list.
        ListNode* dummyList = new ListNode(-1);
        ListNode* temp = dummyList;
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        while(l1 != NULL && l2 != NULL){
            if(l1->val > l2->val){
                temp->next = l2;
                l2 = l2->next;
            }   
            else {
                temp->next = l1;
                l1 = l1->next;
            }
            temp = temp->next;
        }
        if(l1){
            temp->next = l1;
        }
        if(l2)
        {
            temp->next = l2;
        }        
        return dummyList->next;
        
        ListNode* l1 = list1;
        ListNode* l2 = list2;
//         ListNode* dummy = new ListNode(-1);
//         ListNode* temp = dummy;
        
//         while(l1 != NULL && l2 != NULL)
//         {
//             if(l1->val >= l2->val) {
//                 temp->next = l2;
//                 l2 = l2->next;
//             }
//             else {
//                 temp->next = l1;
//                 l1 = l1->next;
//             }
//             temp = temp->next;
//         }
        
//         if(l1 != NULL){
//             temp->next= l1;
//             // temp = temp->next;
//         }
//         if(l2 != NULL){
//             temp->next= l2;
//             // temp = temp->next;
//         }
        
        
//         return dummy->next;
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        
        if(l1->val > l2->val)
            swap(l1,l2);
    
        ListNode* res = l1;
        
        while(l1 != NULL && l2 != NULL){
            ListNode* temp = NULL;
            while(l1 != NULL && l1->val <= l2->val){
                temp = l1;
                l1 = l1->next;
            }
            temp->next = l2;
            swap(l1,l2);
        }
        return res;
    }
};