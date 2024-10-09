'''# List comprehension
# Given a list of tuples, flatten the list using comprehension
# The output list should have the values from tuple only if sum of values in tuple is less than 100
# lst = [(1, 10), (44, 5, 5), (10, 70, 30), (12, 100, -30), (110, -10)]
# output: [1, 10, 44, 5, 5, 12, 100, -30]'''

lst = [(1, 10), (44, 5, 5), (10, 70, 30), (12, 100, -30), (110, -10)]
flatten_list = [item for tup in lst if sum(tup) < 100 for item in tup]
print(flatten_list)

'''# square of every number'''

l = [1,2,3,4,5,6]

square_number = [x ** 2 for x in l]
print(square_number)

'''# cube of every number'''
 
square_number = [x ** 3 for x in l]
print(square_number)

''' Square of even numbers '''

l = [1,2,3,4,5,6]
square_number_even = [x ** 2 for x in l if x % 2 == 0]
print(square_number_even)

'''Remove Vowels from a List of Words'''

words = ['apple', 'banana', 'cherry', 'date']

a = ''.join(words)
print(list(a))

words_without_vowels_char = [''.join([ch for ch in word if ch not in 'aeiou']) for word in words]
print(words_without_vowels_char)

'''  Flatten a List of Lists '''

lst = [[1, 2, 3], [4, 5], [6, 7, 8, 9]]

flatten_list = [num for subList in lst for num in subList]
print(flatten_list)

''' Create a Dictionary from Two Lists '''
keys = ['name', 'age', 'city']
values = ['Alice', 25, 'New York']

dict_From_list = {keys[i] : values[i] for i in range(len(keys))}
print(dict_From_list)

''' Given a list of words, use a list comprehension to create a new list containing only the words longer than a specified length. '''

words = ['apple', 'bat', 'cherry', 'date', 'fig', 'grape']
length = 3

words_list = [x for x in words if len(x) > 3]
print(words_list)

''' Generate a List of Tuples
Generate a list of tuples where each tuple contains a number and its square, for numbers from 1 to 5. '''

tup = [(x,x ** 2) for x in range(1,10)]
print(tup)

''' Convert a List of Strings to Lowercase
Given a list of strings, use a list comprehension to convert them all to lowercase. '''

words = ['APPLE', 'Banana', 'CHERRY']
list_lowercase_Word = [word.lower() for word in words ]
print(list_lowercase_Word)


''' Find Common Elements in Two Lists
Given two lists, use a list comprehension to find the common elements between them.'''

lst1 = [1, 2, 3, 4]
lst2 = [3, 4, 5, 6]

common_list_element = [x for x in lst1 if x in lst2]
print(common_list_element)