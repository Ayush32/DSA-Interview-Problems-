#approach - 1 Using Nested Lopp ,  but at minimum and sell at maximum price
# compare ith value with every jth element and calcualte the profit and  take the maximum profit in jth iteration after the j loop is terminate,
#  with 2nd ith element

# Approach 2 - find minimum
'''We can maintain a minimum from the start of the array and compare it with every element of the array, 
    if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.
        // we remove the inner loop 
        // create a variable maxProfit and initialize with 0
        // Create a variable minPrice and store some larger value(ex: MAX_VALUE) value initially.
        // run the loop from 0 to N
        // Update the minPrice if it is greater than the current element of the array
        // Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
        // Return the maxPro.
        // T.C - O(N)
        // S.C - O(1) '''
        
def buyandSellStock(arr):
    minPrice = float('inf')
    maximum_profit = 0
    
    for i in range(0,len(arr)):
        minPrice = min(minPrice,arr[i])
        maximum_profit = max(maximum_profit,arr[i] - minPrice)
        
    return maximum_profit

arr = [7,1,5,3,6,4]
print(buyandSellStock(arr))