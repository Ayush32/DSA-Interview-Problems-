'''Approach - 1 -  Using Nested 3 Loops'''
'''Approach - 2 - Using Sorting + 2 Loops + using set to get the unique'''
'''Approach - 3  - Using Sorting + loops - T.C - (N^2lognN), S.C - O(1)'''

'''// Approach 3 - we will not use set to find the unique, same complexity but space Complexity will be O(1)
    // ------- How to skip duplicate element -----------
    // As the entire array is sorted, the duplicate numbers will be in consecutive places. 
    // So, while moving a pointer, we will check the current element and the adjacent element. 
    // Until they become different, we will move the pointer by 1 place. We will follow this process for all 3 pointers. 
    // Thus, we can easily skip the duplicate elements while moving the pointers.

    // Now, we can also remove the HashSet as we have two moving pointers i.e. j and k that 
    // will find the appropriate value of arr[j] and arr[k]. So, we do not need that HashSet anymore for the look-up operations.'''


def threeSum(arr):
    """
    Finds all unique triplets in the array which gives the sum of zero.

    Args:
        arr (list): List of integers.

    Returns:
        list: A list of lists, where each inner list contains three integers that sum up to zero.
    """
    low = 0
    high = len(arr)
    arr.sort()
    ans = []
    
    for i in range(len(arr)):
        # This condition skips duplicate elements to avoid redundant triplets
        if i != 0 and arr[i] == arr[i - 1]:
            continue
        
        low = i + 1
        high = len(arr) - 1
        
        while low < high:
            # Calculate the sum of the current triplet
            sum = arr[i] + arr[low] + arr[high]
            
            if sum == 0:
                ans.append([arr[i], arr[low], arr[high]])
                low = low + 1
                high = high - 1
                
                # These loops skip duplicate elements to ensure that each triplet is unique.
                while low < high and arr[low] == arr[low - 1]:
                    low = low + 1
                while low < high and arr[high] == arr[high + 1]:
                    high = high - 1
            
            # If the sum is greater than zero, the `high` pointer is moved left to reduce the sum.
            elif sum > 0:
                high = high - 1
            # If the sum is less than zero, the `low` pointer is moved right to increase the sum.
            else:
                low = low + 1
    
    return ans
        
            
arr = [-1,0,1,2,-1,-4]
print(threeSum(arr))
        