class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL)
            return {};
        
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);
        double sum = 0;
        while(!q.empty())
        {
            vector<double>level;
            int size = q.size();
            for(int i = 0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                double nodeValue = node->val;
                level.push_back(nodeValue);
                if(node->left != NULL)
                    q.push(node->left);
                if(node->right != NULL)
                    q.push(node->right);
            }
            
            for(auto it : level){
                sum += it;
            }
            ans.push_back(sum / level.size());
            level.clear();
            sum = 0;   
        }
        return ans;
    }
};