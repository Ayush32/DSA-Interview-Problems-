#include <bits/stdc++.h>
using namespace std;

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

void findAnagrams(string str, string ptr, int n, int m){
    // Write you code here.
    int i = 0,j = 0;
    string s = "";
    vector<string>indAns;
    while(j < n)
    {
        s += str[j];

        if(s.length() == m)
        {
            if(checkAnagram(s,ptr) == true)
            {
                indAns.push_back(s);
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
    for(auto it : indAns)
    {
        cout << it << " ";
    }
    
}

int main()
{
    string str = "BADCGABCDABCDSFDCD";
    string ptr = "CD";
    vector<int>ans;
    findAnagrams(str,ptr,str.length(),ptr.length());
    
    return 0;
    
}