/*
The idea is to traverse both trees simultaneously, comparing the values of corresponding nodes at each step. 
We need to ensure that the left subtree of each node in the first tree is identical to the left subtree of the 
corresponding node in the second tree, 
and similarly for the right subtrees.
*/

/*The base case for recursion is reached when both nodes are null, indicating the end of the subtree.
 In this case return true. If only one of the nodes in null while the other is not or vice versa,
 return false since they cannot be identical.
 */

bool isIdentical(TreeNode* root1,TreeNode* root2)
{
     // If both nodes are NULL,
        // they are identical
    if(root1 == NULL && root2 == NULL)
        return true
         // If anyone nodes are NULL,
        // they are identical
    if(root1 == NULL || root2 == NULL)
        return false
     // Check if the current nodes
        // have the same data value
        // and recursively check their
        // left and right subtrees
    return root1->val == root2->val && isIdentical(root1->left,root2->left) && isIdentical(root2->left,root2->right)

}