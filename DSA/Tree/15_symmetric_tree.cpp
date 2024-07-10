class Solution {
    bool isSym(TreeNode*p, TreeNode* q)
    {
        if(p == NULL || q == NULL)
            return p == q;
        
        if(p->val != q->val)
            return false;

        return isSym(p->left,q->right) && isSym(p->right,q->left);
        
    }
public:
    bool isSymmetric(TreeNode* root) {
        return root == NULL || isSym(root->left,root->right);
    }
};