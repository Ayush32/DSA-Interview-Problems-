class Solution {
    void inorderOfBst(TreeNode*root,vector<int>&inorder)
    {
        if(root == NULL)
            return;
        inorderOfBst(root->left,inorder);
        inorder.push_back(root->val);
        inorderOfBst(root->right,inorder);
    }
    TreeNode* inorderToBst(vector<int>inorder,int start,int end)
    {
        if(start > end)
            return NULL;
        int mid = start + (end-start)/2;
        TreeNode* root = new TreeNode(inorder[mid]);
        root->left = inorderToBst(inorder,start,mid-1);
        root->right = inorderToBst(inorder,mid +1,end);
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>inorder;
        inorderOfBst(root,inorder);
       return inorderToBst(inorder,0,inorder.size()-1);

    }
};