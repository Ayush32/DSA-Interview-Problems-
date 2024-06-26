/*
You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

 

Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
Example 2:

Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too.*/

 

class Solution {
public:
    int characterReplacement(string s, int k) {
        map<int,int>mp;
        int i = 0,j = 0,maxFreq = INT_MIN;
        int ans = 0;
        
        while(j < s.length())
        {
            mp[s[j]]++;
            maxFreq = max(maxFreq,mp[s[j]]);
            
            if((j - i + 1 - maxFreq) <= k)
            {
                ans = max(ans,j - i  + 1);
            }
            else{
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};