def longestCommonPrefix(arr):
    ans  = ""
    for i in range(0,len(arr[0])):
        ch = arr[0][i]  # extract first character
        match = True

        for j in range(1,len(arr)):  # run the loop from 1 index to n
            if ch != arr[j][i] or len(arr[j]) < i:  #check prefix is equal to prefix in next word or not
                match = False # if not mark match is false
                break
        
        if match == False:
            return ans
        else: # append the prefix in ans var
            ans = ans + ch

    return ans

str = ["flower","flow","flyover"]
print(longestCommonPrefix(str))