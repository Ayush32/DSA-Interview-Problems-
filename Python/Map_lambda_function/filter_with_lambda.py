# filter function 

'''
The filter() function in Python is used to create a new iterator from an iterable for which a function returns true. 
Essentially, filter() can be used to extract elements from an iterable that meet a certain condition

'''


''' Find Common Elements Between Two Lists Using Filter and Lamda '''

lst1 = [1, 2, 3, 4]
lst2 = [3, 4, 5, 6]

common_element_list = list(filter(lambda x : x in lst1,lst2))
print(common_element_list)


''' filters even number from the list '''

l = [1,22,3,4,50,67,7,8,96,100]
even_number_list = list(filter(lambda x : x % 2 == 0, l))
print(even_number_list)


'''Given a list of strings, lambda and filter out only the palindromes.'''

words = ['madam', 'hello', 'racecar', 'python', 'level']
palindrome_string = list(filter(lambda x : x == x[::-1],words))
print(palindrome_string)

''' Filter Students Passing a Threshold Grade.
Given a list of tuples where each tuple represents a student's name and their grade, 
use filter and lambda to retain only the students whose grades are above a certain threshold.
'''
students = [('Alice', 85), ('Bob', 72), ('Charlie', 90), ('David', 65)]

students_marks_greater_than_thresold = list(filter(lambda x : x[1] > 80, students))

print(students_marks_greater_than_thresold)

''' Filter Strings That Contain a Specific Character '''

words = ['apple', 'banana', 'cherry', 'date']

list_with_Words = list(filter(lambda x : 'a' in x,words))
print(list_with_Words)