class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>umap;
        
        for(auto s : strs)
        {
            string temp = s;
            sort(s.begin(),s.end());
            umap[s].push_back(temp);
        }
        for(auto i : umap)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};