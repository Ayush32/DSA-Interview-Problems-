class Solution {
public:
    
    void solve(TreeNode* root,vector<string>&ans,string s){
        if(root == NULL)
            return;
        s = s + char(root->val + 'a');
        
        if(root->left == NULL && root->right == NULL){
            reverse(s.begin(),s.end());
            ans.push_back(s);
        }
        else {
            solve(root->left,ans,s);
            solve(root->right,ans,s);
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>ans;
        string s = "";
        solve(root,ans,s);
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};