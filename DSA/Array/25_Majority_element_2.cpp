lass Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // T.C - O(N^2) - TLE
        // S.C - O(1)
        // create variable  count initialize to 1 and 
        // crete vector for majority Element equal
        // run the loop i to n and j is run from i + 1 to n
        // check current ith element is equal to jth element if it is increment the count
        // after the job loop end then check whether the count of ith elemtn is greater than n/3 if it is then 
        // store the ith current element in vector ans because it may me more than one majority element is present in array.
        vector<int>majorityElement;
        int n = nums.size();
        int count = 0;
        for(int i =0;i<n;i++)
        {
            
            if(majorityElement.size() == 0 || majorityElement[0] != nums[i]){
                count  = 0;
            for(int j = 0;j < n;j++)
            {
                if(nums[i] == nums[j])
                    count++;
            }
            }
            if(count > n/3)
            {
                majorityElement.push_back(nums[i]);
            }
        }
        
        /*
        approach 2 - 
        Intuition = we can count the freq of each element store into the some data structures and check which 
        which element is frequency greater than N/3 and return it
        
        // we can think of frequency array or hashmap
        push all the element of input array to map
        and check which key has value greater than N/2 and return it.
        */
//         T.C - O(Nlogn) + O(N) -> o(NlogN) for pushing the element into hashmap, another O(N) for checking which element has more than N/2 occurrences
//         S.C - O(N)
         int N= nums.size();
        vector<int>majorityElement;
unordered_map<int,int>mp;
        for(int i = 0;i<N;i++)
        {
            mp[nums[i]]++;
        }
        for(auto i : mp)
        {
            if(i.second > N/3)
                majorityElement.push_back(i.first);
        }
        return majorityElement;
    }
    int cnt1 = 0,cnt2 = 0,el1 = 0,el2 = 0;

    for(int i = 0;i < n;i++)
    {
        if(cnt1 == 0 && el2 != nums[i])
            {
                cnt1 = 1;
                el1 = nums[i];
            }
        else if(cnt2 == 0 && el1 != nums[i])
        {
            cnt2 = 1;
            el2 = nums[i];
        }
        else if(el1 == nums[i])
            cnt1++;
        else if(el2 == nums[i])
            cnt2++;
        else {
            cnt1--;
            cnt2--;
        }
        vector<int>majorityElement;

        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0;i < n;i++)
        {
            if(el1 == nums[i])
                cnt1++;
            if(el2 == nums[i])
                cnt2++;
        }
        if(cnt1 > nums.size()/3)
            majorityElement.push_back(el1);
        if(cnt2 > nums.size()/3)
            majorityElement.push_back(el2);

        return majorityElement;
    }

    
};
