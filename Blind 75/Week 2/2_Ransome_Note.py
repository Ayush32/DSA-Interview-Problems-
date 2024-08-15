class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        dict1 = {}
        for i in range(len(magazine)):
            if magazine[i] in dict1:
                dict1[magazine[i]] = dict1[magazine[i]]+1
            else:
                dict1[magazine[i]] = 1
        for i in ransomNote:
            # if the ransomeNote string char is not present in hashmap, 
            if i not in dict1:
                return False
                # if the cunt of character in dict1 is less than 1 it means there are not enough charcter 
            elif dict1[i] < 1:
                return False
            # if the character is found and the count is sufficient, dcremenet the count of that character in dict dictionary
            else:
                dict1[i] = dict1[i] - 1
        else:
            return True