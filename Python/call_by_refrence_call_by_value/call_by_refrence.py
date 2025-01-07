def modify_list(lst):
    print("List before : ", id(lst))
    lst.append(5)  #  # Modifying the list inside the function
    print("List after : ", id(lst))

lst = [1,2,3,4]
print(id(lst))
modify_list(lst)
print(lst)
