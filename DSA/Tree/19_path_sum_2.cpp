/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
// We traverse every root to leaf path using recursive traversal(prefer preorder for code simplicity) 
// and keep a track of the sum as well as the path we are currently traversing. 
// If we encounter a leaf node then check for equality with targetsum and 
// if it is equal then add this path to our answer vector. 
// We do not need to backtrack as we are passing our sum and path vector as call by value and call by refrence,
//  hence each call stack will have its own copy of sum as well as path variable.
    
    void solve(TreeNode*root,int targetSum,int sum_so_far,vector<vector<int>>&ans, vector<int>path)
{
    if (root == NULL)
        return;
    sum_so_far = sum_so_far + root->val;
    path.push_back(root->val);

    if (root->left == NULL && root->right == NULL)
    { // we reached at leaf node
        if (targetSum == sum_so_far)
            ans.push_back(path);
    }
    else
    {
        solve(root->left, targetSum, sum_so_far, ans, path);
        solve(root->right, targetSum, sum_so_far, ans, path);
    }
}
vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
    vector<vector<int>> ans;
    vector<int> path;
    solve(root, targetSum, 0, ans, path);
    return ans;
}
};