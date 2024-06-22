class Solution {
public:
    
    void solve(TreeNode* root,int targetSum,int &count,vector<int>&path)
    {
        if(root == NULL)
            return;
        path.push_back(root->val);
        // left call
        solve(root->left,targetSum,count,path);
        // right call
        solve(root->right,targetSum,count,path);
        
        // check for k sum
        long sum = 0,size = path.size();
        for(int i = size - 1;i >= 0;i--)
        {
            sum += path[i];
            if(targetSum == sum)
                count++;
        }
        // pop the last node value from path vector
        path.pop_back();
        
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        int count = 0;
        solve(root,targetSum,count,path);
        return count;
    }
};