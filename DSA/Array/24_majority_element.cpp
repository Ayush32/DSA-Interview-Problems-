class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // T.C - O(N^2) - TLE
        // S.C - O(1)
        // create variable  count initialize to 1 and 
        // crete variable majority Element equal  to zero
        // run the loop i to n and j is run from i + 1 to n
        // check current ith element is equal to jth element if it is increment the count
        // after the job loop end then check whether the count of ith elemtn is greater than n/2 if it is then 
        // store the ith current element in ans variable.
        
        // int n = nums.size();
        // int majorityElement = 0;
        
        // for(int i =0;i<n;i++)
        // {
        //     int count  = 1;
        //     for(int j = i+ 1;j < n;j++)
        //     {
        //         if(nums[i] == nums[j])
        //             count++;
        //     }
        //     if(count > n/2)
        //     {
        //         majorityElement = nums[i];
        //         break;
        //     }
        // }
        
        /*
        approach 2 - 
        Intuition = we can count the freq of each element store into the some data structures and check which 
        which element is frequency greater than N/2 and return it
        
        // we can think of frequency array or hashmap
        push all the element of input array to map
        and check which key has value greater than N/2 and return it.
        */
        T.C - O(N) + O(N) -> o(2N) for pushing the element into hashmap, another O(N) for checking which element has more than N/2 occurrences
        S.C - O(N)
         int N= nums.size();
        int majorityElement = 0;
unordered_map<int,int>mp;
        for(int i = 0;i<N;i++)
        {
            mp[nums[i]]++;
        }
        for(auto i : mp)
        {
            if(i.second > N/2)
                majorityElement = i.first;
        }
        
        return majorityElement;        
    }
    // Approach -3, Space Optimized
    class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate= 0;
        int count  = 0;

        for(int i = 0;i < n;i++)
        {
            if(count = 0)
                candidate = nums[i];
             if(candidate == nums[i])
                count++;
            else
                count--;
        }
        count = 0;
        for(int i = 0;i < n;i++)
        {
            if(candidate == nums[i])
                count++;
        }
        if(count > nums.size()/2)
            return candidate;
        return -1;
    }
};