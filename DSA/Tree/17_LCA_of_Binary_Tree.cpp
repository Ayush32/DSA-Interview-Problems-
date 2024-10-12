/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL)
            return NULL;
        
        if(root->val == p->val || root->val == q->val)
            return root;
//         Because we would find LCA in the left or right subtree only.

// If the left subtree recursive call gives a null value that means we haven’t found LCA in the left subtree,\
which means we found LCA on the right subtree. 
// So we will return right.
// If the right subtree recursive call gives null value, that means we haven’t found LCA on the right subtree, 
// which means we found LCA on the left subtree. So we will return left .
//  If both left & right calls give values (not null)  that means the root is the LCA.
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        
        if(left == NULL)
            return right;
        if(right == NULL)
            return left;
        return root;
    }
};