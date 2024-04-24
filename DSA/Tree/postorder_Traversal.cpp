class Solution {
    void postOrder(TreeNode* root,vector<int>&ans){
        if(root == NULL)
            return;
        
        
        
        postOrder(root->left,ans);
        postOrder(root->right,ans);
        ans.push_back(root->val);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        postOrder(root,ans);
        return ans;
    }
};