class Solution {
public:
    int height(TreeNode* root, int &dis)
    {
        if(root == NULL)
            return 0 ;
        int l = height(root->left,dis);
        int r = height(root->right,dis);
        int dl = (root->left && root->val == root->left->val) ? l + 1 : 0;
        int dr = (root->right && root->val == root->right->val) ? r + 1 : 0;
        dis = max(dis,dl + dr);
        return max(dl,dr);
    }
    int longestUnivaluePath(TreeNode* root) {
        int dis = 0;
        height(root,dis);
        return dis;
    }
};