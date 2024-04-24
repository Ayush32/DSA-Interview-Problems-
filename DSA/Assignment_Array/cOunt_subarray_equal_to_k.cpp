class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // sliding window
      int sum = 0;
        int count  = 0;
        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++)
        {
            sum += nums[i];
            if(sum == k)
                count++;
            
            if(mp.find(sum - k) != mp.end())
                count += mp[sum - k];
            mp[sum]++;
        }
        return count;
    }
};