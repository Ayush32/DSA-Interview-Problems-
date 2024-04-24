
    vector<int> topKFrequent(vector<int>& nums, int k) {
         /*
        Intuition
        first we should the count the frequency of each element
        // then we choose which number has most frequency because that will be out most freuent numbber which appears many times in an array, we choose k diffrent element
        */
        /*
        Approach -1 
        1) - use Map to count the frequency of each element
        2) - traverse the map and push all the map element to Pririty queue and minHeap maintains the order in 
        descending order
        3) - after that we take the most frequent element with higher frequency from queue and push into our ans array, we doing this at least k times
        */

        unordered_map<int,int>mp;
        int n = nums.size();
        vector<int>ans;
        for(int i = 0; i < n ;i++)
        {
            mp[nums[i]]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        for(auto it : mp)
        {
            pq.push({it.second,it.first});

            while(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        
        return ans;
    }
