s = "samplestring"

# split method - The split() method in Python is used to divide a string into a list of substrings based on a specified separator 
# ---------
print(s.split('e'))
s1 = "I am a good boy"
print(s1.split())
s2 = "i,am,am.,,a,"
print(s2.split(','))
# st = "ayush"/

# The join() method in Python is used to concatenate the elements of an iterable (such as a list, tuple, or set)
# into a single string with a specified delimiter placed between each element.
mylist = ['hello','world','from','python']
res = ' '.join(mylist)
res1 = '-'.join(mylist)
st = ['a','y','u','s','h']
print(''.join(st))
print(res)
print(res1)
# casefold() - The casefold() method in Python is used to convert all characters of a string into lowercase.
# It is more aggressive than the lower() method, meaning it converts more characters into lowercase and removes all case distinctions
new_string = "StRing"
print(new_string.casefold())

# count() - Return the number of non-overlapping occurrences of substring sub in
new_string = "geeksforgeeks"
print(new_string.count('e'))

# startswith() - return true/false to check whether the string start with given character/agrument or not
print(new_string.startswith('g'))

# endsWith() - return true/false to check whether the string end with given character/agrument or not
print(new_string.endswith('s'))

# The find() method finds the first occurrence of the specified value.

# The find() method returns -1 if the value is not found.

# The find() method is almost the same as the index() method, the only difference is that the index() method raises an exception if the value is not found.
# we can also include start index and end index to find the index of value in specfied range
new_string1 = "i am good boy"
print(new_string1.find("good"))

# capitalize()	Converts the first character to upper case
print(new_string.capitalize())

# index()	Searches the string for a specified value and returns the position of where it was found
print(new_string.index('e'))


s1 = "auyush"
# isalnum()	Returns True if all characters in the string are alphanumeric
print(s1.isalnum())

# isalpha()	Returns True if all characters in the string are in the alphabet
s1 = "1yauhs"
print(s1.isalpha())

# # islower()	Returns True if all characters in the string are lower case
# # isnumeric()	Returns True if all characters in the string are numeric
# # strip()	Returns a trimmed version of the string
aa = "i am good boy"
print(aa.title())
# swapcase()	Swaps cases, lower case becomes upper case and vice versa
# title()	Converts the first character of each word to upper case
# translate()	Returns a translated string
# upper()	Converts a string into upper case
# zfill()	Fills the string with a specified number of 0 values at the beginning
# rfind()	Searches the string for a specified value and returns the last position of where it was found
# rindex()	Searches the string for a specified value and returns the last position of where it was found
a = "abcdeac"
print(a.find("a"))  # find the first occurence of character
print(a.rfind("z")) # find the last occurence of character