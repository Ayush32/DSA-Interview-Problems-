class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* rightNode = NULL;
            int size = q.size();
            for(int i = size - 1;i >= 0;i--)
            {
                auto curr = q.front();
                q.pop();
                curr->next = rightNode;
                rightNode = curr;
                if(curr->right){
                    q.push(curr->right);
                    q.push(curr->left);
                }
            }
        }
        return root;
    }
};