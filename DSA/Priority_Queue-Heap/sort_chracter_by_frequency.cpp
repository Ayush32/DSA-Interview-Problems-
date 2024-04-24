#include<bits/stdc++.h>
using namespace std;

void sortCharByFreq(string s)
{
    unordered_map<char,int>mp;
    priority_queue<pair<int,char>>maxHeap;

    for(int i = 0;i < s.length();i++)
    {
        mp[s[i]]++;
    }
    for(auto it : mp)
    {
        maxHeap.push({it.second,it.first});
    }
    while(!maxHeap.empty())
    {
        int freq = abs(maxHeap.top().first);
        char c = maxHeap.top().second;
        while(freq--){
            cout << c;
        }
        maxHeap.pop();
    }
}
int main()
{
    string s = "bbaA";
    sortCharByFreq(s);
    return 0;
}