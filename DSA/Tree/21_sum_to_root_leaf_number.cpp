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
class Solution {
public:
    
    void solve(TreeNode* root,vector<string>&allPaths,string paths)
    {
        if(root == NULL)
            return;
        paths = paths + to_string(root->val);
        
        if(root->left == NULL && root->right == NULL){ // we reached at leaf node
            allPaths.push_back(paths);
        }
        
        else {
            solve(root->left,allPaths,paths); // left call
            solve(root->right,allPaths,paths); // right call
        }
    }
    int sumNumbers(TreeNode* root) {
        // int sum = 0;
        vector<string>allPaths;
        string paths = "";
        solve(root,allPaths,paths);
        long long sum = 0;
        for(auto it : allPaths){
            sum += stoi(it);
        }
        return sum;
    }
};