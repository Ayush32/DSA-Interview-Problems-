class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // if(nums.size() == 1)
        //     return;
        // vector<int>v;
        // int count  = 0; // count the number of zeros
        // for(int i = 0;i< nums.size();i++)
        // {
        //     if(nums[i] != 0)
        //         v.push_back(nums[i]);
        //     else 
        //         count++;
        // }
        // while(count != 0)
        // {
        //     v.push_back(0);
        //     count--;
        // }
        // nums = v;

        // Approach 2 -
         /*
         We can think of using two pointers ‘i’ and ‘j’, we move ‘i’ till we don’t get a number arr[i] which is different from 0. As we got a 0 number we will increase the j pointer and swap arr[i] value with arr[j] value 


        */
        int left = 0;
        int right = 1;
        while(right < nums.size())
        {
            if(nums[left] != 0){// i tb move kro jb i pointer ki value 0 ni ho
                left++;
            
            swap(nums[left],nums[right]);  // agar i pointer ki value 0 h us tym ye cond hogi and swap hoga i and j ki value 
            //  and increment hoga right pointer
            right++;
        }
    }
};