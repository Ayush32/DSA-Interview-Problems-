''' Using Nested Loop'''

'''Approach 2 - Using Kadens Algo'''

def maximumSubarray(arr):
    
    curr_product_so_far = 1
    max_product_so_far = float('-inf')
    
    for i in range(len(arr)):
        curr_product_so_far = curr_product_so_far * arr[i]
        
        if curr_product_so_far > max_product_so_far:
            max_product_so_far = curr_product_so_far
            
        if curr_product_so_far < 0:
            curr_product_so_far = 1
            
    curr_product_so_far = 1
    for i in range(len(arr) - 1,-1,-1):
        curr_product_so_far = curr_product_so_far * arr[i]
        
        if curr_product_so_far > max_product_so_far:
            max_product_so_far = curr_product_so_far
            
        if curr_product_so_far < 0:
            curr_product_so_far = 1
        
    return max_product_so_far

arr = [2,3,-2,4]
arr1 = [-2,0,-1]
print(maximumSubarray(arr))
print(maximumSubarray(arr1))