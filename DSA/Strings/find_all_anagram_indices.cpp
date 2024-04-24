/*
Sample Input 1 :
2
10 3
CBAEBABACD
ABC
5 2
ABADE
BA
Sample Output 1 :
0 6
0 1
Explanation For Sample Output 1:
Test Case 1:

'STR' is ‘CBAEBABACD’ and ‘PTR’ is ‘ABC’.

0-2 in 'STR' index 0,1,2 are ‘CBA’, and it is an anagram with ‘ABC’.
1-3 in 'STR' index 1,2,3 are ‘BAE’, and it is not anagram with ‘ABC’.
2-4 in 'STR' index 2,3,4 are ‘AEB’, and it is not anagram with ‘ABC’.
3-5 in 'STR' index 3,4,5 are ‘EBA’, and it is not anagram with ‘ABC’.
4-6 in 'STR' index 4,5,6 are ‘BAB’, and it is not anagram with ‘ABC’.
5-7 in 'STR' index 5,6,7 are ‘ABA’, and it is not anagram with ‘ABC’.
6-8 in 'STR' index 6,7,8 are ‘BAC’, and it is an anagram with ‘ABC’.
7-9 in 'STR' index 7,8,9 are ‘ACD’, and it is not anagram with ‘ABC’.

Hence, there are only two substrings in the given string 'STR'  that are anagram with given string  ‘PTR’ which are ‘CBA’, and ‘BAC’ and starting indices of respective anagram substrings are 0 and 6.


Test case 2:

'STR' is ‘ABADE’ and ‘PTR’ is ‘BA’.

In the given string ‘ABADE’ the substring of length 2 starting with index 0 is ‘AB’ which is an anagram with the string ‘BA’ and a substring of length 2 starting with index 1 is ‘BA’ which is also an anagram with the string ‘BA’. Because 0 and 1 are starting indices of the substrings, we print 0 and 1.
Sample Input 2:
2
10 4
BACDGABCDA
ABCD
7 1
ABABABA
A
Sample Output 2:
0 5 6
0 2 4 6
*/

// T.C - (NlognN)
bool checkAnagram(string str1,string str2)
{
    // vector<int>freq1(26,0);
    if(str1.length() != str2.length())
        return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings
    for (int i = 0; i < str1.length(); i++)
        if (str1[i] != str2[i])
            return false;
 
    return true;
}

vector<int> findAnagramsIndices(string str, string ptr, int n, int m){
    // Write you code here.
    int i = 0,j = 0;
    string s = "";
    vector<int>indAns;
    while(j < n)
    {
        s += str[j];

        if(s.length() == m)
        {
            if(checkAnagram(s,ptr) == true)
            {
                indAns.push_back(i);
                i++;
                j = i;
                s = "";
            }
            else {
                s = "";
                i++;
                j = i;
                
            }
        }
        else 
            j++;
    }
    return indAns;
}