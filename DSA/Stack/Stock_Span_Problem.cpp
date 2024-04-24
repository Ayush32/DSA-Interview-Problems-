#include <bits/stdc++.h>
using namespace std;

vector<int> findStockSpans(vector<int> &prices)
{
    // Write your code here.
    stack<pair<int, int>> s;
    vector<int> ans;
    for (int i = 0; i < prices.size(); i++)
    {
        if (s.size() == 0)
        {
            ans.push_back(-1);
        }
        else if (s.size() > 0 && s.top().first > prices[i])
        {
            ans.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first <= prices[i])
        {
            while (s.size() > 0 && s.top().first < prices[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(s.top().second);
            }
        }
        s.push({prices[i], i});
    }

    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = i - ans[i];
    }
    return ans;
}