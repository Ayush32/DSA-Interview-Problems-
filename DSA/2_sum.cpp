
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        T.C - O(N^2)
        S.C - (1)
//         Approach - 1 - Using Brute Force
                       vector<int>ans;
            int n = nums.size();
        for(int i = 0;i<n-1;i++)
        {
            for(int j = i+ 1;j<n;j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                }
            }
        }
        
        /*Approach 2 - Using Two Pointer + sorting
        T.C - O(nlogn)
        S.C - (1) 
        we initialized two variable low pointing to the first index in left and high at last index
        we check if the sum of value at left and high pointer is equal to target then we shift left to right
        high to left i.e(low++,high--)
        if sum if greater than target then, it means right pointer is at higher value so we shift high pointer to left
        if sum is smaller than target it means we get smaller value so we move low towards high
        */
            
        class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        vector<int>ans= nums;
        vector<int>v;
        int r = nums.size() - 1;
                sort(nums.begin(),nums.end());

        while(l < r) {
            if(nums[l] + nums[r] == target)
                break;
            else if(nums[l] + nums[r] > target)
                r--;
            else
                l++;
        }

        for(int i = 0;i<ans.size();i++){
            if(ans[i] == nums[l] || ans[i] == nums[r])
                v.push_back(i);
        }
        sort(v.begin(),v.end());
        return v;
    }

   Approach - 3 - Using Hashing
//    Intuition: Basically, in the previous approach we selected one element and then searched for the other one using a loop. Here instead of using a loop, we will use the HashMap to check if the other element i.e. target-(selected element) exists. Thus we can trim down the time complexity of the problem.

// And for the second variant, we will store the element along will its index in the HashMap. Thus we can easily retrieve the index of the other element i.e. target-(selected element) without iterating the array.
   T.C - O(N)
   S.C - O(N)
    vector<int> twoSum(vector<int>& v, int target) {
        unordered_map<int,int>umap;
        vector<int>ans;
        for(int i = 0;i<v.size();i++)
        {
            if(umap.find(target - v[i]) != umap.end()){
                ans.push_back(i);
                ans.push_back(umap[target-v[i]]);
            }
            umap[v[i]] = i;
        }
    
        return ans;
    }
};
