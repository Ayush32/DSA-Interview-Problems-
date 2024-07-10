/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string ans = "";
        int n = strs.size();
        // traverse all character of the first string
        
        for(int i = 0;i < strs[0].length();i++)
        {
            // extract the first chacter
            char ch = strs[0][i];
            bool match  = true;
            // start the loop from 1st character
            for(int j  = 1; j < n;j++){
                // if not match
                
                if(ch != strs[j][i] || strs[j].size() < i){
                    match = false;
                    break;
                }
            }
            
            if(match == false)
                return ans;
            else
                ans.push_back(ch);
        }
        return ans;
    }
};