class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         if(root == NULL)
            return {};
        vector<vector<int>>ans;
        
        queue<TreeNode*> q;
        q.push(root);
        // bool leftToRight = false;
        bool leftToRight = true;
        while(!q.empty())
        {
            int size = q.size();
            vector<int>level;
            
            for(int i = 0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
            
            // find the position to fill the node value
            level.push_back(node->val);
            if(node->left != NULL)
                q.push(node->left);
            if(node->right != NULL)
                q.push(node->right);
            
            }
            if(leftToRight == false){
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            level.clear();
            leftToRight = !leftToRight;
            
        }
        return ans;
    }
};