import copy

original = [[1,2,3],[4,5,6]]
shallow_copy = copy.copy(original)
shallow_copy[0].append(99)
print("Shallow copy", shallow_copy)
print("Oroginal", original)
print(id(shallow_copy))
print(id(original))
print(id(shallow_copy[0]))
print(id(original[0]))


a =(4231,5,14,14,1,31,3,13,5346,2)
print(sorted(a))