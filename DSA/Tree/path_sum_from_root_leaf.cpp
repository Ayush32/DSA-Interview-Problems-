class Solution {
public:
    bool solve(TreeNode*root,int targetSum)
    {
        if(root == NULL)
            return false;
        targetSum = targetSum - root->val;
        if(root->left == NULL && root->right == NULL && targetSum == 0)
            return true;
        if(root->left == NULL && root->right == NULL)
                return false;
        return solve(root->left,targetSum) || solve(root->right,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root,targetSum);
    }
};