

def flatten_list(l):
    flattten_list_res = []
    
    for num in l:
        if isinstance(num,list):
            flattten_list_res.extend(flatten_list(num))
        else:
            flattten_list_res.append(num)
            
    return flattten_list_res




l = [1,[2],[3,[4,5,6]],7,[8]]
print(flatten_list(l))
# print(flatten_list_without_recursion(l))