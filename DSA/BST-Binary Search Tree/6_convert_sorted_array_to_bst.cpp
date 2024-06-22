class Solution {
        TreeNode* helper(vector<int>&nums,int left,int right){
            // base case
            if(left > right)
                return NULL;
            int mid = (left + right)/2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = helper(nums,left,mid-1);
            root->right = helper(nums,mid + 1,right);

            return root;
        }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};
