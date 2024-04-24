class Solution {

    bool isIdenticalHelp(TreeNode* root,TreeNode* subRoot)
    {
        // base case
        if(root == NULL && subRoot == NULL) // base case
            return true;

        if(root == NULL || subRoot == NULL) // if root or subroot is null then false
            return false;
        // check if the data of both root are same and also check for both the left and right subtree is same or not
        return (root->val == subRoot->val && isIdenticalHelp(root->left,subRoot->left) && isIdenticalHelp(root->right,subRoot->right));
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL)
            return false;
        if(subRoot == NULL)
            return true;
        // check the subroot is identical in/ or present in root or not
        if (isIdenticalHelp(root,subRoot))
            return true;

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};