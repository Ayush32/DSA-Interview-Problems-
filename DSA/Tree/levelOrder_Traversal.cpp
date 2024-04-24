vector<int> zigzagTreeTraversal(TreeNode<int> *root)
{
    //    Write your code here.
        vector<int>ans,temp;

    if(root == NULL)
        return ans;
    queue<TreeNode<int>*>q;
    q.push(root);
    bool flag = true;
    while(!q.empty())
    {
        int size = q.size();
        for(int i = 0;i<size;i++)
        {
            TreeNode<int>* node = q.front();
            q.pop();

            if (node->left != NULL)
              q.push(node->left);
            if (node->right != NULL) 
              q.push(node->right);
            temp.push_back(node->data);
        }
        if(!flag)
            reverse(temp.begin(),temp.end());
        for (auto it : temp) {
            ans.push_back(it);
        }
        temp.clear();
        flag = !flag;
    }

        return ans;
    }

}