''' Using Nested Loop'''

def maximumSubarray(arr):
    
    curr_sum_so_far = 0
    max_sum_so_far = 0
    
    for i in range(len(arr)):
        curr_sum_so_far = curr_sum_so_far + arr[i]
        
        if curr_sum_so_far > max_sum_so_far:
            max_sum_so_far = curr_sum_so_far
            
        if curr_sum_so_far < 0:
            curr_sum_so_far = 0
            
    return max_sum_so_far

arr = [-2,1,-3,4,-1,2,1,-5,4]
arr1 = [5,4,-1,7,8]
print(maximumSubarray(arr))
print(maximumSubarray(arr1))