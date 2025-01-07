import copy

original = [[1,2,3],[4,5,6]]
deep_copy = copy.deepcopy(original)
deep_copy[0].append(99)
print("Deep Copy ", deep_copy)
print("original ", original)
print(id(deep_copy))
print(id(original))
print(id(deep_copy[0]))