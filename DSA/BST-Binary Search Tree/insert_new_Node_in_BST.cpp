void solve(TreeNode<int>*root,int val)
{
    if(root == NULL)
    {
        root = new TreeNode<int>(val);
        return;
    }
    if(root->val > val){
        if(root->left != NULL)
            solve(root->left,val);
        else
            root->left = new TreeNode<int>(val);
    }
    else {
        if(root->right != NULL)
            solve(root->right,val);
        else
            root->right = new TreeNode<int>(val);
    }
}


TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    solve(root,val);
    return root;
}