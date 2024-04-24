class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        long long res = 1;
        queue<pair<TreeNode*, long long>> q;
        
        // I am using intialising list
        q.push({root, 0});      // also can use make_pair
        
        while(!q.empty())
        {
            long long cnt = q.size();
            // start is the index of root node for first level
            long long start = q.front().second;
            long long end = q.back().second;
            
            res = max(res,end-start + 1);
            
            for(int i = 0; i <cnt; ++i)
            {
                TreeNode* node = q.front();
                // we will use it while inserting it children
                // left child will be 2 * idx + 1;
                // right child will be 2 * idx + 2;
                long long idx = p.second - start;
                
                q.pop();
                
                // if  left child exist
                if(node->left != NULL)
                    q.push({node->left, (long long)2 * idx + 1});
                
                // if right child exist
                if(node->right != NULL)
                    q.push({node->right, (long long) 2 * idx + 2});
            }
        }
        
        return res;
    }
};