class Solution {
public:
    int maxProfit(vector<int>& prices) {
//       Intuition - we have to buy that day which have the minimum price
//                  and sell the stock where price is maximum so from this we can get maximum profit.
        
        // Use Nested loop, i is left pointer initialize with 0, and j loop will be run from i + 1
        // calculate the profit only that day where selling prices is greater than buying prices
        //  check if(nums[i] < nums[j]) , we calculate profit,
        // and update our maximum profit, if profit is greater than maximum_profit;
        
        // T.C - O(N^2)
        // S.C - O(1)
    //    this approach will give TLE
            
        int maximumProfit = 0;
        int profit = 0;
        int n = prices.size();
        for(int i = 0;i < n;i++)
        {
            for(int j = i +1 ;j<n;j++)
            {
                if(prices[i] <= prices[j]){
                    profit = prices[j] - prices[i];
                    maximumProfit = max(profit,maximumProfit);
                }
            }
            
        }
        
        // Approach 2 -
        // We can maintain a minimum from the start of the array and compare it with every element of the array, if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.
        // we remove the inner loop 
        // create a variable maxProfit and initialize with 0
        // Create a variable minPrice and store some larger value(ex: MAX_VALUE) value initially.
        // run the loop from 0 to N
        // Update the minPrice if it is greater than the current element of the array
        // Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
        // Return the maxPro.
        // T.C - O(N)
        // S.C - O(1)
        int maximumProfit = 0;
         int minPrice = INT_MAX;
         int n = prices.size();
         for(int i = 0;i < n;i++)
         {
             minPrice = min(prices[i],minPrice);
            maximumProfit = max(prices[i] - minPrice,maximumProfit); 0th index - > maxProfit = 0

         }

        return maximumProfit;
    }
};
