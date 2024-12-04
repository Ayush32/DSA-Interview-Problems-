'''
Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.

In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.

Return an array containing the index of the row, and the number of ones in it.

 

Example 1:

Input: mat = [[0,1],[1,0]]
Output: [0,1]
Explanation: Both rows have the same number of 1's. So we return the index of the smaller row, 0, and the maximum count of ones (1). So, the answer is [0,1]. 
'''

'''

 We want to find the row with the maximum number of 1s using binary search, we can take advantage of the fact that each row is sorted in descending order. 
 The binary search will help determine the first occurrence of 1 in each row efficiently.

Key Idea:
Use binary search to find the first occurrence of 1 in each row. The number of 1s in the row will then be number_of_columns - index_of_first_1.
Track the row with the maximum number of 1s.
Algorithm:
For each row, perform a binary search to find the index of the first 1.
Calculate the count of 1s in that row.
Keep track of the row index with the maximum number of 1s.
Time complexity: O(nlogm), where 
𝑛
n is the number of rows and 
𝑚
m is the number of columns.'''

def binarySearch(nums, x):
    """
    Binary search to find the first element less than x in descending sorted array.
    Returns the index of the first occurrence of 0 (or length of row if all are 1s).
    """
    start = 0
    end = len(nums) - 1
    ans = len(nums)  # Default if no 0 is found

    while start <= end:
        mid = (start + end) // 2
        
        # find the first occurence of 1 in every row
        if nums[mid] >= x:  # Adjust for descending order
            ans = mid
            end = mid - 1
        else:
            start = mid + 1  # Move right for descending order

    return ans

def maxRowsWith1(matrix):
    """
    Find the index of the row with the maximum number of 1s in a descending sorted matrix.
    """
    maxCount = 0
    index = -1

    for i in range(len(matrix)):
        firstoccourence = binarySearch(matrix[i], 1)  # Number of 0s starts at binary search result
        num_of_ones = len(matrix[i]) - firstoccourence

        if num_of_ones > maxCount:
            maxCount = num_of_ones
            index = i

    return index

# Example matrix
matrix = [
    [1, 1,1, 1], 
    [1, 1, 1, 0], 
    [1, 1, 0, 0], 
    [1, 0, 0, 0]
]

print(maxRowsWith1(matrix))  # Output: 0 (row 0 has the maximum number of 1s)

     
# matrix = [[1,0,0,0],[1,1,1,0],[1,1,0,0],[1,1,1,1]]
# # matrix = [[1, 1, 1], [0, 0, 1], [0, 0, 0]]
# print(maxRowsWith1(matrix))     
     