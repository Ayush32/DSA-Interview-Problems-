class Solution {
public:


    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root == NULL)
            return NULL;
        queue<TreeNode*>q;
        q.push(root);
        int level = 0;
        while(!q.empty())
        {
           
            int size = q.size();
            // nodes will hold all the nodes of current level
            vector<TreeNode*>nodes;
            // nums will hold their values;
             vector<int>nums;
            
            for(int i = 0; i < size;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                nums.push_back(curr->val);
                nodes.push_back(curr);
                if(curr->left != NULL)
                    q.push(curr->left);
                if(curr->right != NULL)
                    q.push(curr->right);
            }
            //If the level is odd, I will reverse the values and assign them to the TreeNodes using a for loop. 
            if(level % 2 != 0)
            {
                reverse(nums.begin(),nums.end());
                for(int i = 0;i < nums.size();i++)
                {
                    TreeNode* curr = nodes[i];
                    curr->val = nums[i];
                }
            }
            // increase the level;
            level++;
        }
        return root;

         
        
    }
};