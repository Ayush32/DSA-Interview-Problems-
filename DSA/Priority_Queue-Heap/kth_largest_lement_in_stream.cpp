class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int kth;
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        // insert all element into queue
        for(int i = 0;i< nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(pq.size() > kth)
            pq.pop();
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size() > kth)
            pq.pop();
        return pq.top();
    }
};