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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr = head;
        ListNode* temp = head;
        
        vector<int>ngr;
        
        while(curr->next){
            temp = curr->next;
            while(temp  && temp->val <= curr->val){
                temp = temp->next;
            }
            if(temp){
                ngr.push_back(temp->val);
            }
            else {
                ngr.push_back(0);
            }
            curr = curr->next;
        }
        ngr.push_back(0);
        return ngr;
        
        vector<int>list;
        vector<int>ngr;
        ListNode* curr = head;
        while(curr != NULL)
        {
            list.push_back(curr->val);
            curr = curr->next;
        }
        // ngr.push_back(0);
        stack<int>st;
        
        for(int i = list.size()-1;i >= 0;i--)
        {
            if(st.empty()){ // for first index, stack is empty so our next greater element for current is zero
                ngr.push_back(0);
            }
           else if(st.size() > 0 && st.top() > list[i]) {   // if top of stack is greater than current element so we can we get our greater element
                ngr.push_back(st.top());
            }
            else if(st.size() > 0 && st.top() <= list[i]){  // agar stack ka top greater ni h current element se 
                while(st.size() > 0 && st.top() <= list[i]){ // tab tak pop krte rho or sath me check kro ki khi stack empty to ni h
                    st.pop();
                } 
                
                if(st.size() == 0){ // after loop terminates there is only two condition either all the stack element is smaller than current element so stack will be empty.
                    ngr.push_back(0);
                }
                else { // this case will be when we got a element i.e top of stack is greater than current element.
                    ngr.push_back(st.top()); 
                }
            }
            st.push(list[i]);   // push input array element into our stack.
            
        }
        reverse(ngr.begin(),ngr.end());
        return ngr;

    }
};