#include <bits/stdc++.h> 

int findFloor(BinaryTreeNode<int> *node, int x){
    // Write your code here.

    int floor = -1;
    while(node != NULL)
    {
        if(node->data == x)
            return node->data;
        else if(node->data < x)
            node = node->left;
        else {
            floor = node->data;
            node = node->right;
        }
    }
    return floor;
}