// Exactly(k) = atMost(k) – atMost(k-1)

// While traversing, calculate the count of odd numbers. If count of odd numbers became greater than m, then increment the index i and check whether the arr[i] is an odd element or not. If arr[i] is odd then decrement the count of odd till the count of odd becomes equal to m. Store the length of subarray in ans.

// Do the above process for subarrays with at most k odd elements and for the subarrays with at most k-1 odd elements.

// If we subtract the subarrays with at most k-1 odd elements occur from the subarrays with at most k odd elements occur, we get exactly the subarrays with k odd elements.