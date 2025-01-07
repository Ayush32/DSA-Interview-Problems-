
result = lambda a, b : a + b
print(result(5,6))


# Map function

'''
Definition and Usage
The map() function executes a specified function for each item in an iterable. The item is sent to the function as a parameter.

Syntax
map(function, iterables)
'''

a = lambda a,b:a+b
print(a(4,5))

l1 = [1,2,3,4,5,6,7,8,9,10]

# square of every number using map function

def square(num):
    return num ** 2

squared_numbers = map(square,l1)

squared_numbers_list = list(squared_numbers)

print(squared_numbers_list)


'''square of every number using map and lambda function '''
# Use map with a lambda function to square each element
squared_numbers_l = map(lambda x : x ** 2, l1)
print(squared_numbers_l)
# convert into list
squared_numbers_list_lambda = list(squared_numbers_l)
print(squared_numbers_list_lambda)


'''cube of every number using map and lambda function '''

cube_numbers = map(lambda x : x ** 3, l1)
cube_numbers_list = list(cube_numbers)
print(cube_numbers_list)

''' convert a list of string into integers  '''

list_of_string = ['1','2','3','4','5','6','7','8']
convert_list_into_string = list(map(lambda x : int(x), list_of_string))
print(convert_list_into_string)


'''combines first name and last name'''

first_name = ["Ayush","Vyshanvi", "Rohan"]
last_name = ["Gupta","Jonnala","Shukla"]

combine_first_last_name_list = list(map(lambda first,last : first + " " + last,first_name,last_name))
print(combine_first_last_name_list)

''' Convert temperatures from celsius to farheniet '''

celsius = [0, 20, 37, 100]

celsius_to_farhenit = list(map(lambda cel : (cel * 9/5) + 32,celsius))
print(celsius_to_farhenit)


''' convert a word to uppercase '''
words = ['hello', 'world', 'python']

words_uppercase = list(map(lambda w : w.upper(),words))
print(words_uppercase) 

''' Remove Spaces from Strings in a List '''

strings = ['hello world', '  python  ', 'map lambda']
# The replace() method in Python is used to replace occurrences of a substring with another substring.
remove_spaces_from_list = list(map(lambda x : x.replace(' ',''),strings))

print(remove_spaces_from_list)

''' Compute the Product of Corresponding Elements in Two Lists '''

l1 = [1,2,3]
l2 = [4,5,6]

product_two_list = list(map(lambda x,y: x*y,l1,l2))
print(product_two_list)

'''  reverse a string in list '''

words = ['abc','geegf','orange','afa']

reversed_string_list = list(map(lambda word : word[::-1],words))

print(reversed_string_list)