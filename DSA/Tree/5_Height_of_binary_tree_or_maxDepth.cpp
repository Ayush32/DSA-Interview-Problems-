class Solution {
public:
    int maxDepth(TreeNode* root) {
        // using recursion
        // if(root == NULL)
        //     return 0;
        
        // int lh = maxDepth(root->left);
        // int rh = maxDepth(root->right);
        
        // return 1 + max(lh,rh);
        
        // using level order
        if(root == NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int level = 0;
        while(!q.empty())
        {
            //  level = 0;

            int size = q.size();
            while(size--){
                TreeNode* curr = q.front();
                q.pop();

                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }

            }
            level++;
        }
        return level;
    }
};