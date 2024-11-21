'''
Given an m x n matrix, return all elements of the matrix in spiral order.
Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

'''
def spiralMatrix(mat):
    top = 0
    bottom = len(mat) - 1
    left = 0
    right = len(mat[0]) - 1
    result = []
    while top <= bottom and left <= right:
        # left to right print means first row
        for i in range(left,right+1):
            result.append(mat[top][i])
        top = top + 1
        
        # print from top to bottom 
        for i in range(top,bottom+1):
            result.append(mat[i][right])
        right = right - 1
        # print right to left
        
        if top <= bottom:
            
            for i in range(right,left - 1, - 1):
                result.append(mat[bottom][i])
            bottom = bottom - 1
            
        if left <= right:
            for i in range(bottom,top - 1, - 1):
                result.append(mat[i][left])
            left = left + 1
        
    return result

matrix = [[1,2,3],[4,5,6],[7,8,9]]
[1,2,3]
[4,5,6]
[7,8,9]
print(spiralMatrix(matrix))