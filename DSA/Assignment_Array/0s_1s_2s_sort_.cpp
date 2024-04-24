void sortColors(vector<int>& nums) {
        // Approach -1 , Using Sort Function
        // sort(nums.begin(),nums.end());
        
        // Approach 2 - Using Couting Method
        // T.C - O(N),
        // S.C - O(1)
        
        // Iterate over the array, take three variable count0 to count no. of 0's
        // count1 to count no. of 1's
        // count2 to count no. of 2's
        
        // iterate again over the array and push the 0 into the array until count0 
        // same as for 1 and 2
        
        int count0 = 0,count1 = 0,count2 = 0;
        int n = nums.size();
        int i;
        for(i = 0;i<n;i++)
        {
            if(nums[i] == 0)
                count0++;
            if(nums[i] == 1)
                count1++;
            if(nums[i] == 2)
                count2++;
        }
        i = 0;
        while(count0--){
            nums[i++] = 0;
        }
        while(count1--){
            nums[i++] = 1;
        }
        while(count2--){
            nums[i++] = 2;
        }

        Approach 3 - Dutch national Flag Algorithm

        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }       
}