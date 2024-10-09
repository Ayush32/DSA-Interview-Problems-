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
         We can think of using two pointers ‘i’ and ‘j’, we move left till we don’t get a number arr[left] which is different from 0. As we got a 0 number we will swap arr[left] value with arr[right] value and increase *right pointer


        */
        int left = 0;
        int right = 1;
        while(right < nums.size())
        {
            if(nums[left] != 0){// left tb move kro jb left pointer ki value 0 ni ho
                left++;
            
            swap(nums[left],nums[right]);  // agar i pointer ki value 0 h us tym ye cond hogi and swap hoga i and j ki value 
            //  and increment hoga right pointer
            right++;
        }
    }
};