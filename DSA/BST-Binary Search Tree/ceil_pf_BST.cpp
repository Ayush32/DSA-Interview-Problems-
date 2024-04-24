#include <bits/stdc++.h> 

int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.

    int ceil = -1;
    while(node != NULL)
    {
        if(node->data == x)
            return node->data;
        else if(node->data < x)
            node = node->right;
        else {
            ceil = node->data;
            node = node->left;
        }
    }
    return ceil;
}