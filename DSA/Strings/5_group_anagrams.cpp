class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>umap;
        // ["eat","tea","tan","ate","nat","bat"] 
        // aet -> eat,
        // tea => sort => aet(is work as a key) -> tea
        // tan => sort  => ant => tan
        // ate => sort => aet => key is same aet,tea,ate
        // nat => sort => ant => key is same ant -> tan,nat
        // bat => sort => atb => key is same atb -> bat
        // [["bat"],["nat","tan"],["ate","eat","tea"]] - output

        for(auto s : strs)
        {
            // first we store the current word in temp variable
            // then sort the current word, make current word as a key, push the temp word which we stored previous
            // move to next word, sort store the word in temp var , sort the word, if the word is already present in the hashmap in the form key, then they store the temp var value with its corresponding key
            
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