class Solution {
public:

    void helper(TreeNode* root,vector<string>&paths,string path)
    {
        if(root == NULL)
            return;
        
        path = path + to_string(root->val);

        if(root->left != NULL || root->right != NULL)
            path = path + "->";
        if(root->left == NULL && root->right == NULL) // base/ when path reached leaf node, push the paths from root to leaf into ans, 
            paths.push_back(path);

        helper(root->left,paths,path);
        // path = path + "->";
        helper(root->right,paths,path);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>paths;
        string path = "";
        helper(root,paths,path);
        return paths;
    }
};