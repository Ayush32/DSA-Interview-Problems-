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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        Approach -- 1 - T.C - O(N*NLogn)
                        S.C - O(N*N)
        brute Force
         vector<int>listNode;
         for(int i = 0;i < lists.size();i++)
         {
             ListNode* temp = lists[i];
             while(temp != NULL){
                int value = temp->val;
                listNode.push_back(value);
                temp = temp->next;
             }

         }
         sort(listNode.begin(),listNode.end());
         ListNode* ans = new ListNode(-1);
         ListNode* temp = ans;
         for(int i = 0;i < listNode.size();i++)
         {
             ListNode* newNode = new ListNode(listNode[i]);
             temp->next = newNode;
             temp = temp->next;
         }
         return ans->next;
         
        //  Approach -- 2 - T.C - O(N*K(Lognk))
                        // S.C - O(N*K) fro map
        map<int,int>mp;
         for(int i = 0;i < lists.size();i++)
         {
             ListNode* temp = lists[i];
             while(temp != NULL){
                int value = temp->val;
                // listNode.push_back(value);
                mp[value]++;
                temp = temp->next;
             }

         }
         ListNode* ans = new ListNode(-1);
         ListNode* temp = ans;
         for(auto it : mp)
         {
             while(it.second--){
                ListNode* newNode = new ListNode(it.first);
                temp->next = newNode;
                temp = temp->next;
            }
         }
         return ans->next;

         Approach 2 - Using Merge Sort T.C - O(NklogK) S.c- o(k)
         step - 1 - divide and conquere call mergeSort function node * mergesort(list,start,end) 
         step - 2 - combine both sorted list into one sorted list (Node* merge(l1,l2))
         if(lists.size() == 0)
            return NULL;
         return mergeListHelper(lists,0,lists.size()-1);

    }
    ListNode* mergeListHelper(vector<ListNode*>lists,int start,int end)
    {
        if(start == end)
            return lists[start];
        
        if(start + 1 == end)  // base case 
            return merge(lists[start],lists[end]);
        int mid = start + (end - start)/2;
        ListNode* left = mergeListHelper(lists,start,mid);
        ListNode* right = mergeListHelper(lists,mid + 1,end);
        return merge(left,right);
    }
    ListNode* merge(ListNode* l1,ListNode* l2)
    {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                temp->next = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        if(l1 != NULL)
            temp->next = l1;
        if(l2 != NULL)
            temp->next = l2;
        
        return dummy->next;
    }
};