class Solution {
    void inOrder(TreeNode* root,vector<int>&ans){
        if(root == NULL)
            return;
        
        inOrder(root->left,ans);
        ans.push_back(root->val);
        inOrder(root->right,ans);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inOrder(root,ans);
        return ans;
    }
};