import copy

original = [[1,2,3],[4,5,6]]
deep_copy = copy.deepcopy(original)
deep_copy[0].append(99)
print("Deep Copy ", deep_copy)
print("original ", original)
print(id(deep_copy))
print(id(original))
print(id(deep_copy[0]))
print(id(original[0]))

x = 10
y = x
c = 10
print(x is y)
print(x is c)

a = 10000
b = 10000
print(a == b)
l = [1,2,3]
l3 = l
l2 = [1,2,3]
print(l3 is l)
print(l is l2)