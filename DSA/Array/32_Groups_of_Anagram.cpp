#include<bits/stdc++.h>
using namespace std;


//  An anagram of a string is another string that contains the same characters, only the order of characters can be different.
 // An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

void groupAnagrams(vector<string>&strs)
{
   // T.C - O(N * K log(k))
   // S.C - O(N *K)
   map<string,vector<string>>mp;
   for(int i = 0;i < strs.size();i++)
   {
      string curr = strs[i];
      // {"eat","tea","tan","ate","nat","bat"};
      // --> eat - anagrams -> ate,tea,aet,tae,aet, vector -> aet = aet,tea,ate
      // --> tan = sort = ant -> tan,nat,
      // --> bat - sort = abt => bat
      sort(strs[i].begin(),strs[i].end());
      mp[strs[i]].push_back(curr);
   }
   vector<vector<string>>ans;
   for(auto it : mp)
   {
      ans.push_back(it.second);
   }
   for(int i = 0;i < ans.size();i++)
   {
      cout << ans[i][0];
      cout << endl;
   }
}


int main()
{
   vector<string>strs = {"eat","tea","tan","ate","nat","bat"};
   groupAnagrams(strs);

}