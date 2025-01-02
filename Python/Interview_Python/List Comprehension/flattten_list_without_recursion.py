l = [1, [2], [3, [4, 5, 6]], 7, [8]]

def flatten_list(nested_list):
    flat_list = []
    stack = nested_list[::-1]  # Use a stack, reversing the list for LIFO processing

    while stack:
        element = stack.pop()
        if type(element) == list:  # Check if the element is a list
            stack.extend(element[::-1])  # Add elements of the list to the stack in reverse order
        else:
            flat_list.append(element)

    return flat_list

flattened_list = flatten_list(l)
print(flattened_list)
