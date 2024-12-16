
# SET = st is an unordered uqniue collection of element in which occurrnec of every element should be unique

s = {1,2,3,4,5,7,5}
print(s)

s1 = set() # intializer an empty set
s1 = {1,2,3}
# add() method - add an element to the set, no effect if element is already present in the set
s1.add(4)
print(s1)

# pop() -  set pop method will remove first element from the set and it will store into the var if you want
a = s1.pop()
print(a)
print(s1)

# remove() - remove() method take arguement as value - it will remove the specifed value from the set and exception keyerror if not present in the set
b = s1.remove(2)
print(b) #return None
print(s1)

s1 = {1,2,3,4,5,6}
print(s1.clear())  # clear the set or remov all the set return empty set


# union of two set
''' Union  - The union of two sets A and B includes all the elements of sets A and B.  '''

s1 = {1,2,3,4,5,6}
s2 = {2,3,5,1,8}
print(s1.union(s2))
 
''' Set Intersection
The intersection of two sets A and B include the common elements between set A and B '''
s1 = {1,2,3,4,5,6,8}
s2 = {2,3,5,1}
print(s1.intersection(s2))

''' 
Diffrence Two set - The difference between two sets A and B include elements of set A that are not present on set B.
'''
print(s1.difference(s2))