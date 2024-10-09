void sortColors(vector<int>& nums) {
        // Approach -1 , Using Sort Function
        // sort(nums.begin(),nums.end());
        
        // Approach 2 - Using Couting Method
        // T.C - O(N) + )(N) = O(2N),
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

        // Approach 3 - Dutch national Flag Algorithm
//         Here, as the entire array is unsorted, we have placed the mid pointer in the first index and the high pointer in the last index.
//  The low is also pointing to the first index as we have no other index before 0. Here, we are mostly interested in placing the ‘mid’ pointer 
// and the ‘high’ pointer as they represent the unsorted part in the hypothetical array.

// Now, let’s understand how the pointers will work to make the array sorted.

// Approach:

// Note: Here in this tutorial we will work based on the value of the mid pointer.

// The steps will be the following:

// First, we will run a loop that will continue until mid <= high.
// There can be three different values of mid pointer i.e. arr[mid]
// If arr[mid] == 0, we will swap arr[low] and arr[mid] and will increment both low and mid. Now the subarray from index 0 to (low-1) only contains 0.
// If arr[mid] == 1, we will just increment the mid pointer and then the index (mid-1) will point to 1 as it should according to the rules.
// If arr[mid] == 2, we will swap arr[mid] and arr[high] and will decrement high. Now the subarray from index high+1 to (n-1) only contains 2.
// In this step, we will do nothing to the mid-pointer as even after swapping, the subarray from mid to high(after decrementing high) might be unsorted. 
// So, we will check the value of mid again in the next iteration.
// Finally, our array should be sorted.

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