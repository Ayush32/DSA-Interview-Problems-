class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL)
            return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast->next != NULL && fast->next->next != NULL)
        {
            fast= fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        TreeNode* root = new TreeNode(slow->val);
        if(prev != NULL)
            prev->next = NULL;
        else
            head = NULL;
        
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);

        return root;    
    }
};