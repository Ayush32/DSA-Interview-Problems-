from os import *
from sys import *
from collections import *
from math import *

import sys
from sys import stdin

def spiralPathMatrix(matrix, n, m):
    # Write your code here.
    
    top = 0 # first row
    bottom = n - 1  # last row
    left = 0  # first col
    right = m - 1  # last column
    ans = []
    while top <= bottom and left <= right:
        # left to right, row is same column is changing

        for i in range(left,right+1):
            ans.append(matrix[top][i])
        
        top = top + 1

        # top to bottom row is chaing, clumn is same

        for i in range(top,bottom + 1):
            ans.append(matrix[i][right])
        
        right = right - 1

        if top <= bottom:

            # right to left, column is chaning ,row is saem
            for i in range(right,left - 1,-1):
                ans.append(matrix[bottom][i])
            
            bottom = bottom - 1
        
        if left <= right:
            # bottom to top, column is same ,row is changing
            for i in range(bottom,top - 1,-1):
                ans.append(matrix[i][left])
            
            left = left + 1
    
    return ans

t = int(input().strip())

for j in range(t):
    
    n, m = list(map(int, stdin.readline().strip().split(" ")))
    
    arr = []
    
    for i in range(n):
        
        a = list(map(int, stdin.readline().strip().split(" ")))
        arr.append(a)
            
    
    for i in spiralPathMatrix(arr, n, m):
        print(i, end = " ")
        
    print()