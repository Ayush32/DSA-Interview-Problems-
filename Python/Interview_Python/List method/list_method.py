l1 = [1,2,3,4,5,6,2,7]

# list - A list in Python is a built-in, dynamic, mutable, and ordered collection of elements enclosed within square brackets [].

##############################   Apppend and Extend Method ###################################

# insert new element at the end of list
# append function take only one argument
l1.append(8)
# l1.append([1,2,3,4,5])
print(l1)

l2 = [9,10,11,12]
# append one list to another list and the second list will be unpack
l1.extend(l2)
# l1.extend((1,2,3))
print(l1)

# if we append list into another list then using append method then l2 will append as whole list
l1.append(l2)
print(l1)
# is same as extend method l1 + l2
sumlist = l1 + l2
# print()
print("sumlist " ,sumlist)
print("another opeation")
print(l1)

# if we add l3 and l4 then the result list will be both the list element
l3 = [1,2,3,3,4,4,3,4,5,4,6,4]
l4 = [4,5,6,7]
print(l3 + l4)

##############################   Clear Method ###################################

# to clear the list or empty the list
l2.clear()
print(l2)

##############################   Count Method ###################################

# to the count the frequency in of any element , it return frequency of elment that pass to count function, arugmeent should be integer value
print(l3.count(4))

##############################   Copy Method ###################################

# The copy() method in Python creates a shallow copy of a list. This means that any modifications made to the new list won't affect the original list
org = [1,2,3,4]
l5 = []
l5 = org.copy()
print(l5)
l5.append(100)
# any modification in l5 will not reflect to original list l1
print(l5)
print(org)
##############################   Index Method ###################################

# get the index of particular element in list, it always return the first index of given value no matter what the element is present more than twice
print(l1.index(2))
#  we can also search in particular range by given start and end value
# start = starting point of index, end = where you want to search the endpoint
print(l1.index(2,3,7))
print(l1.index(2,3))
print(l1.index(10000))

##############################   Insert Method ######################################

# insert new element in the list at specific index
new_list = [1,3,4,5]
new_list.insert(1,2)
print("Insert method")
print(new_list)
# if the given index is greater than lengtgh of list then it will insert new element at the end of list
new_list.insert(10,6)
print(new_list)
# we can insert tuple in the list at specific postion
new_list.insert(3,(4,5,6))
# new_list.append((4,5,6))
# insert at the ending of the list
new_list.insert(-1,5)
# [1, 2, 3, (4, 5, 6), 4, 5, 5, 'end', 6]
new_list.insert(-1,"end")

# we can insert set as well as dicitionary in the list at specific postion
new_list.insert(0,{4,5,6})
new_list.insert(1,{'a' : 1, 'b' : 2})
print(new_list)

##############################   Pop Method ###################################
print("Pop Method")
#  pop method will be remove or pop the element from end of the list
new_lst = [1,2,3,4,5]
print(new_lst.pop())
print(new_lst)
#  you can pass index that you want to remove from the list it will remove the element on that index
print(new_lst.pop(0))
print(new_lst)

##############################   Remove Method ###################################

new_lst = [1,2,3,4,5]
# remove method take the value insted of index, and it will remove the value from list 
new_lst.remove(5)
#  list.remove(x): x not in list give error if the value is not in the list
# new_lst.remove(7)
print(new_lst)


##############################   Reverse Method ###################################

new_lst = [1,2,3,4,5]
# reverse function will reverse the list
new_lst.reverse()
print(new_lst)

##############################   Sort Method ###################################

''' sort() Method
Modifies the list in place (i.e., it does not create a new list).
Only works for lists.
'''

l1 = [1,6,2,6,7,2,13,10]
# sort in ascending order
l1.sort()
print(l1)
# sorted in descending order
l1.sort(reverse=True)
print(l1)

# based on the length of the word
l2 = ["ayush","gg","aaa","kkkk","a"]
l2.sort(key=len)
print(l2)
l2.sort(key=len,reverse=True)
print(l2)
##############################   Sorted Function ###################################

'''Returns a new sorted list.
Works with any iterable (like lists, tuples, strings, etc.).'''

lst = [5,1,2,10,6,8,14,12]
print(sorted(lst))
# also option to sort in descending order
print(sorted(lst,reverse=True))

print("set sorting")
st = {5,5,2,10,8,8,1,12,11,12}
# we can aslo sort the set and its will only store one occurence of every element and remove the other occurenece of element
print(sorted(st))

tup = (5,5,2,10,8,8,1,12,11,12)
# sorted_tuple = sorted(tup)
print(sorted(tup))
# convrt back to the tuple
sorted_tuple = tuple(sorted(tup))
print(sorted_tuple)

# When sorting a dictionary using sorted(), it sorts the keys of the dictionary by default. The result is a list of sorted keys.
d = {'a' : 1, 'c' : 4, 'b' : 2 }
sorted_d = sorted(d)
print(sorted_d)

s = "string"
print(s.split("_"))

'''
To sort a dictionary by its values, you can use the key parameter:'''
sorted_by_value = sorted(d.items(), key=lambda item: item[1])
print(sorted_by_value)

'''  positive index = [0,1,2,3,4,5,6,7,8]
     negative index = [-9,-8,-7,-6,-5,-4,-3,-2,-1]
'''
# Slicing 
new_list1 = [1,2,3,4,5,6,7,8,9]
# reverse the list
print(new_list1[::-1])
# slicing[start:stop:step]
# start = start index - inclusive
#  end = end index - exclujsive = end - 1 will print
# step = intervals between the index
print(new_list1[1:4])
# with step
print(new_list1[2:7:2])
# [start:] - inclusive
print(new_list1[3:]) ## print the element from index 3 till the end of list
# Get all elements from the beginning up to index 4 (exclusive of 4):
# [:end] - exculsive
print(new_list1[:4])
# Get the last three elements using negative start index from back side:
print(new_list1[-3:])
# Get all elements except the last three: using negative start index from back side:
print(new_list1[:-3])
# Get every second element from the list:
print(new_list1[::2])
# Get every three element from the list:
print(new_list1[::3])
# Get every three element from the list : starting index 1
print(new_list1[1::3])
# Get every second element from the end of the list:
print(new_list1[::-2])
# Get every second element from the second-to-last element to the third element from the start, in reverse:
print(new_list1[-2:1:-2])
# to print all the list
print(new_list1[:])
# get the every second element from start 1 indx to 8 index
print(new_list1[1:8:2])
# Extract elements in reverse order from index 8 to 2:
print(new_list1[8:1:-1])

print("ope")
# Extract elements between index 3 and the third element from the end:
print(new_list1[3:-3])
# first reverse the list then print every third element index
print(new_list1[::-3])

'''
You can create a slice object and use it to slice a list. This can be useful for more dynamic or reusable slicing operations:
'''
my_slice = slice(1, 8, 2)
sliced_list = new_list1[my_slice]
print(sliced_list) 
