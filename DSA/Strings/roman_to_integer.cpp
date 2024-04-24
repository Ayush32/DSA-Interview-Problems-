// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.


class Solution {
public:
    int romanToInt(string s) {
      unordered_map<int,int>mp;
      mp['I'] = 1;
      mp['V'] = 5;
      mp['X'] = 10;
      mp['L'] = 50;
      mp['C'] = 100;
      mp['D'] = 500;
      mp['M'] = 1000;
      int value = 0;  
      for(int i = 0;i < s.size();i++)
      {
        if(mp[s[i]] < mp[s[i+1]])
            value -= mp[s[i]];
        else
            value += mp[s[i]];
      }
      return value;
    }
};