#include <bits/stdc++.h>
vector<int> getTopView(TreeNode<int> *root)
{
    // Write your code here.
    if(root == NULL)
        return {};
    queue<pair<int,TreeNode<int>*>>q;
    q.push({0,root});
    map<int,int>mp;
    vector<int>topView;
    while(!q.empty())
    {
        auto it = q.front();
        q.pop();
        TreeNode<int>* node = it.second;
        int line = it.first;
        if(mp.find(line) == mp.end())
            mp[line] = node->data;
        
        if(node->left != NULL)
            q.push({line-1,node->left});
        if(node->right != NULL)
            q.push({line+1,node->right});
        
    }

    for(auto it : mp)
        topView.push_back(it.second);
    
    return topView;
}