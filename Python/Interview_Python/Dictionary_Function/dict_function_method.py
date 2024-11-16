my_dict = {'name': 'Alice', 'age': 25}

print(my_dict.get('name'))

print(my_dict.keys())

print(my_dict.values())

print(my_dict.items())

'''Removes the specified key and returns the corresponding value. If the key is not found, it raises a KeyError.
'''

age = my_dict.pop('age')
print(age)
print(my_dict)

my_dict.update({'age' : 25})
print(my_dict)

'''Removes and returns the last inserted key-value pair (LIFO order) as a tuple. If the dictionary is empty, it raises a KeyError.
'''

item = my_dict.popitem()

print(item)
print(my_dict)

my_dict.update({'age' : 25,'city' : 'lucknow'})

for key,value in my_dict.items():
    print(key,value)

my_dict.clear()
print(my_dict)