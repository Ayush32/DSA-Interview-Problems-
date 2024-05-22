class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>maxHeap;
        int n = score.size();
        for(int i = 0;i < n;i++)
        {
            minHeap.push(score[i]);
        }
        vector<string>ranks;
        int count = 0;
        while(!minHeap.empty())
        {
            count++;
            if(count < 4)
            {
                ranks.push_back()
            }
        }

    }
};