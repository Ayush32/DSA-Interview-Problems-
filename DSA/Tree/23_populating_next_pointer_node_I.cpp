class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {

            
            int qSize = q.size();

            while(qSize--)
            {
                auto curr = q.front()

                if qSize != 0
                    curr->next = q.front();
            }
                if(curr->left){
                    q.push(curr->left);
                    q.push(curr->right);
                }
            }
        }
        return root;
    }
};