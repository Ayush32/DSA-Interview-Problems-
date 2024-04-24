// Given a string s, find the length of the longest substring without repeating characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int end = 0;
        int maxLength = 0;
        unordered_set<char>st;
        while(start < s.size())
        {
            // if the character is not present in hashset take length of subtring w/o repeating character
            if(st.find(s[start]) == st.end())
            {
                maxLength = max(start - end  + 1,maxLength);
                st.insert(s[start]);
                start++;
            }
            // if the character is  present in hashset remove the character pointing by end pointer and increment
            else {
                st.erase(s[end]);
                end++;
            }
        }
        return maxLength;
    }
};