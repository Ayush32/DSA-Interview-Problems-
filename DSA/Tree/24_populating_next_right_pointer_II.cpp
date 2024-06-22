class Solution {
public:
       Node* connect(Node* root) {
        if(root == NULL)
            return root;
        queue<Node*>q;
        q.push(root);
        Node* curr;
        while(!q.empty())
        {
            int qSize = q.size();

            while(qSize--)
            {
                curr = q.front();
                q.pop();

                if(qSize != 0)
                    curr->next = q.front();

                if(curr->left != NULL)
                    q.push(curr->left);
                if(curr->right != NULL)
                    q.push(curr->right);
            }
        }
        return root;
    }
};