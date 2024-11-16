'''
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 
Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

'''
# using character frequency of 26 Size which is O(1)

def valid_anagram(s,t):
    freq1 = [0] * 26
    freq2 = [0] * 26
    
    for i in range(len(s)):
        freq1[ord(s[i]) - ord('a')] += 1
    
    print(ord('a') - ord('a'))
    
    for i in range(len(t)):
        freq2[ord(t[i]) - ord('a')] += 1
    
    for i in range(len(freq1)):
        if freq1[i] != freq2[i]:
            return False
    
    return True

# 2nd Method

def valid_anagram2(s,t):
    freq1 = [0] * 26
    
    for i in range(len(s)):
        freq1[ord(s[i]) - ord('a')] += 1
    
    for i in range(len(t)):
        freq1[ord(t[i]) - ord('a')] -= 1
    
    for i in range(len(freq1)):
        if freq1[i] != 0:
            return False
    
    return True

s = "anagram"
t = "nagaram"
if valid_anagram(s,t):
    print("Valid Anagram")
else:
    print("Not a Valid Anagram")

if valid_anagram2(s,t):
    print("Valid Anagram")
else:
    print("Not a Valid Anagram")