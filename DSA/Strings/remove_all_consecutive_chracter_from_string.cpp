/*iven a string S. For each index i(1<=i<=N-1), erase it if s[i] is equal to s[i-1] in the string.

Example 1:

Input:
S = aabb
Output:  ab 
Explanation: 'a' at 2nd position is
appearing 2nd time consecutively.
Similiar explanation for b at
4th position.*/

class Solution{
    public:
    
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        string str = "";
        int i = 0;
        while(i < s.length())
        {
            while(s[i] == s[i-1])
            {
                i++;
            }
            str += s[i];
            i++;
        }
        return str;
    }
};