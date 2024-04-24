class Solution {
public:
    TreeNode* solve(vector<int>&preOrder,int mini,int maxi,int &i)
    {
        if(i >= preOrder.size())
            return NULL;

        if(preOrder[i] < mini || preOrder[i] > maxi)
            return NULL;
        
        TreeNode* root = new TreeNode(preOrder[i++]);
        root->left = solve(preOrder,mini,root->val,i);
        root->right = solve(preOrder,root->val,maxi,i);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int mini = INT_MIN;
        int maxi = INT_MAX;
        int i = 0;
        vector<int>preOrder = preorder;
        return solve(preOrder,mini,maxi,i);
    }
};