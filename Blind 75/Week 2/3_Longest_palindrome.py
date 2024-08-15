'''
Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
palindrome
 that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
 
'''

def longest_palindrome(s):
    hashmap = {}
    # calculte frequency of each character and store charac as key and freq as value in dictionary
    for i in range(len(s)):
        if s[i] in hashmap:
            hashmap[s[i]] += 1
        else:
            hashmap[s[i]] = 1
        
    oddLen = 0
    # count the len of character whose freq is odd
    for key,value in hashmap.items():
        if value % 2 != 0:
            oddLen = oddLen + 1
    '''
    If there is more than one character with an odd frequency (oddLen > 1), 
    the method returns the total length of the string minus the number of odd characters plus 1.
    This adjustment allows for the placement of one odd character in the center of the palindrome,
    while pairs of characters contribute to the edges of the palindrome.
    '''
    if oddLen > 1:
        return len(s) - oddLen + 1

    return len(s)

s = "abccccdd"
print(longest_palindrome(s))
        
    