
struct Compare {
   bool operator() (pair<int,string>a,pair<int,string>b)
   {
       if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
   }
};

class Solution {
public:

    vector<string> topKFrequent(vector<string>& words, int k) {
      unordered_map<string,int>umap;
        vector<string>ans;
        for(int i = 0;i < words.size();i++)
        {
            umap[words[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,Compare>pq;
        for(auto it : umap)
        {
            pq.push({it.second,it.first});
        }
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};