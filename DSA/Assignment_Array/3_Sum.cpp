




// Problem  - 11 -  3 Sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>s;
        vector<vector<int>>ans;
//         // Approach - 1 - Brute Force - TLE
//         T.C - O(N^3)
//         S.C - O(N)
//         for(int i = 0;i<n-2;i++)
//         {
//             for(int j = i + 1;j<n-1;j++)
//             {
//                 for(int k = j + 1;k<n;k++)
//                 {
//                     if(nums[i] + nums[j] + nums[k] == 0)
//                         s.insert(vector<int>{nums[i],nums[j],nums[j]});
//                 }
//             }
            
//         }
//         for(auto it :s){
//                ans.push_back(vector<int>{it});
//             }



Space Complexity: O(2 * no. of the unique triplets) as we are using a set data structure and a list to store the triplets.
        
        
    // Approach -2 Two Pointer  + Sorting
//     T.C - O(N^2lognN)
        // S.C - O(N) -- for using set
        if(n < 3)
           return ans;
           set<vector<int>>s;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++)
           {
               int low = i + 1;
               int high = n - 1;
               
               while(low < high)
               {
                   if(nums[i] + nums[low] + nums[high] == 0)
                   {
                       s.insert(vector<int>{nums[i],nums[low],nums[high]});
                       low++;
                       high--;
                   }
                   else if(nums[i] + nums[low] + nums[high] > 0){
                       high--;
                   }
                   else{
                       low++;
                   }
               }
           }
           for(auto it :s){
               ans.push_back(vector<int>{it});
            }
        
          
        return ans;

    }
    Time Complexity: O(N2 * log(no. of unique triplets)), where N = size of the array.
Reason: Here, we are mainly using 3 nested loops. And inserting triplets into the set takes O(log(no. of unique triplets)) time complexity. 
But we are not considering the time complexity of sorting as we are just sorting 3 elements every time.

Space Complexity: O(2 * no. of the unique triplets) + O(N) as we are using a set data structure and a list to store the triplets and extra O(N) for storing the array elements in another set.
};


// Optimal Solution
int main()
{
   vector<int>nums = {-1,0,1,2,-1,-4};
    int n = nums.size();
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for(int i = 0;i < n;i++)
    {
        if(i == 0 || i > n && nums[i] != nums[i + 1])
            continue;
        
        int low = i + 1;
        int high = n - 1;
        while(low <= high)
        {
            int sum = nums[i] + nums[low] + nums[high];
            if(sum == 0)
            {
                cout << nums[i] << " " << nums[low] << " " << nums[high];
                
                while(low < high && nums[low] != nums[low + 1])
                    low++;
                while(low < high && nums[high] != nums[high - 1])
                    high--;
                low++;
                high--;
            }
            else if(sum < 0)
                low++;
            else
                high--;
        }
        cout << endl;
        
    }
    

    return 0;
}

