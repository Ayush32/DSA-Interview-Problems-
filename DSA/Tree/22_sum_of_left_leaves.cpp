class Solution {
public:
    void solve(TreeNode* root,int &sum,int i)
    {
        if(root == NULL)
            return;
        
        
        if(root->left == NULL && root->right == NULL) // to check the leaf node
            sum += root->val * i;  
            // if we are at left leaf node then we sum the value of leaf node 
            // but when we are at right lead node then the node->value is equal to zero
        solve(root->left,sum,1); // for left subtree node value of i is 1 
        
        solve(root->right,sum,0); // for right subtree node value of i is 0
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        solve(root,sum,0);
        return sum;
    }
};