
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       /* Approach - 1  - Using Hashing
        We can calculate frequency of each element then check which element freqency is 1 i.e element is appear only one time , we can use hashmap which store key,value =, key as a element,value as no.of times that element present in an array i.e frequency
        T.C - O(N)
        S.C - O(N)
        */
        
        int n =  nums.size();
        unordered_map<int,int>umap;
        for(int i = 0;i<n;i++)
        {
            umap[nums[i]]++;
        }
        
        int singleNumberInArray = 0;
        for(auto it : umap){
            if(it.second == 1)
                singleNumberInArray = it.first;
        }
        return singleNumberInArray;
        
      /*  Approach - 2 - To more optimize
      we can think of XOR method, we can XOR of all element in an array, and then we get our single element
      which is present in an array,because all element present twice in array which they cancel out when we taking XOR after end of iteration we have only  single number i.e our ans;
        T.C - O(N)
        S.C - O(1);
        [4,1,2,1,2], O/p =  4
        ans = nums[i] ^ ans;
        i = 0, ans = 4 ^ 0  
        i = 1, ans = 4 ^ 1 100 001
        i = 2, ans = 2 ^ 5 010 101
        i = 3, ans = 1 ^ 7 001 111
        i = 4, ans = 2 ^ 6 = 010 110 = 100
        ans = 4 -> single number
      */
        int n = nums.size();
        int singleNumberInArray = 0;
        for(int i = 0;i<n;i++)
        {
            singleNumberInArray = singleNumberInArray ^ nums[i];
        }
        return singleNumberInArray;
    }
};
