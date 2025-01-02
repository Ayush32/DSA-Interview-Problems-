def flatten_dict(d, parent_key='', separator='_'):
    flat_dict = {}
    for key, value in d.items():
        new_key = f"{parent_key}{separator}{key}" if parent_key else key
        if isinstance(value, dict):  # Check if the value is a dictionary
            flat_dict.update(flatten_dict(value, new_key, separator))
        else:
            flat_dict[new_key] = value
    return flat_dict

# Example usage
nested_dict = {
    "a": 1,
    "b": {
        "c": 2,
        "d": {
            "e": 3,
            "f": 4
        }
    },
    "g": 5
}

flattened_dict = flatten_dict(nested_dict)
print(flattened_dict)
