def firstOccurrence(arr,target):
    ans = -1
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = low + (high - low)//2
        
        if arr[mid] == target:
            ans = mid #  we got the target equal to arr[mid], this can be also our firstOccurence but we are not sure
            # so we store mid in our ans var
            high = mid - 1 # we eliminate the right half because we know that our first occurence will always lies in left half
        elif arr[mid] < target:  # arr[mid] > target
            low = mid + 1
        else:
            
            high = mid - 1  
    return ans

def lastOccurrence(arr,target):
    ans = -1
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = low + (high - low)//2
        
        if arr[mid] == target:
             #  we got the target equal to arr[mid], this can be also our last Occurrence but we are not sure
            # so we store mid in our ans var
            ans = mid
            # we eliminate the left half because we know that our last occurrence will always lies in right half
            low = mid + 1
        elif arr[mid] < target:  # arr[mid] > target
            low = mid + 1
        else:
            high = mid - 1  
    return ans


arr = [1,3,5,5,5,12,16]
target = 5
first = firstOccurrence(arr,target)
last = lastOccurrence(arr,target)

if first != -1 and last != -1:
    print(first,last)

# Follow up question on first and last occurrence of number
# count of an element in sorted array ,target = 5, freq  = 3
# first occ and second occ => lastOcc - firstOcc + 1 = 4 - 2 + 1 = 3