class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         /* Approach - 1  - Using Hashing
        We can calculate frequency of each element then check which element freqency is 1 i.e element is appear only one time , we can use hashmap which store key,value =, key as a element,value as no.of times that element present in an array i.e frequency
        T.C - O(N)
        S.C - O(N)
        */
        vector<int>ans;
        int n =  nums.size();
        unordered_map<int,int>umap;
        for(int i = 0;i<n;i++)
        {
            umap[nums[i]]++;
        }
        
        int singleNumberInArray = 0;
        for(auto it : umap){
            if(it.second == 1)
                ans.push_back(it.first);
        }
        return ans;
    }
};