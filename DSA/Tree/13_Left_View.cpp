vector<int> getLeftView(TreeNode<int> *root) {
  //    Write your code here
    if (root == NULL)
        return {};
    vector<int>leftView;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        for(int i = 1;i<=size;i++)
        {
            TreeNode<int>* node = q.front();
            q.pop();
            if(i == 1)
                leftView.push_back(node->data);
            
            if(node->left != NULL)
                q.push(node->left);
            if(node->right != NULL)
                q.push(node->right);
        }

    }
    return leftView;
}