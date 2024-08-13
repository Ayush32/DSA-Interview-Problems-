
'''
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

'''

def is_alpha(c):
    if c >= 'a' and c <= 'z' or c >= 'A' and c <= 'Z':
        return True
    return False

def isUpper(c):
    if c >= 'A' and c <= 'Z':
        return True 
    return False

def is_palindrome(s):
    start = 0
    end = len(s) - 1
    while start <= end:
        if s[start] != s[end]:
            return False
        start = start + 1
        end = end - 1
    return True


def valid_Palidrome(s):
    result = ""
    for i in range(len(s)):
        if is_alpha(s[i]) == True:
            if isUpper(s[i]) == True:
                result += chr(ord(s[i]) + 32)
            else:
                result += s[i]
            
    
    
    return is_palindrome(result)


s = "A man, a plan, a canal: Panama"
if valid_Palidrome(s):
    print("It's a valid palindrome")
else:
    print("Not a Palindrome")