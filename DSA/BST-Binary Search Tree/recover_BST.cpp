class Solution {
public:

    // T.C - O(N*logN)
    // S.C - O(N)
    void findInorder(TreeNode* root,vector<int>&inOrder)
    {
        if(root == NULL)
            return;
        
        findInorder(root->left,inOrder);
        inOrder.push_back(root->val);
        findInorder(root->right,inOrder);
    }

    void makeBSTfromInorder(TreeNode*root,vector<int>&inOrder,int &index)
    {
        if(root == NULL)
            return;
        makeBSTfromInorder(root->left,inOrder,index);
        root->val = inOrder[index++];
        makeBSTfromInorder(root->right,inOrder,index);
    }

    // T.C - O(N),
    // S.C - O(1)
    void markTree(TreeNode* root,TreeNode* &first,TreeNode* &second,TreeNode* &prev)
    {
        if(!root)
            return;
        markTree(root->left,first,second,prev);
        if(prev)
        {
            if(root->val < prev->val){
                if(first == NULL)
                    first = prev;
                second = root;
            }
        }
        prev = root;
        markTree(root->right,first,second,prev);
    }


    void recoverTree(TreeNode* root) {
        // vector<int>inOrder;
        // findInorder(root,inOrder);
        // sort(inOrder.begin(),inOrder.end());
        // int index = 0;
        // makeBSTfromInorder(root,inOrder,index);

        // 2nd method
        TreeNode* first = NULL,*second = NULL,*prev = NULL;
        markTree(root,first,second,prev);
        swap(first->val,second->val);
        return;
       
    }
};