// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isAlphaNumeric(char c)
    {
        if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            return true;
        else 
            return false;
    }

    bool checkPalindrome(string str)
    {
        int start = 0;
        int end = str.length()-1;
        while(start <= end)
        {
            if(str[start] != str[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

    bool isPalindrome(string s) {
        string str = "";
        int len = s.length();
        for(int i = 0; i < len; i++)
        {
            if(isAlphaNumeric(tolower(s[i])))
                str += tolower(s[i]);
        }
        return checkPalindrome(str);
    }   
};