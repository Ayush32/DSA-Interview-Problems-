def difflist(list1,list2):
    print("Diff between two list : ", (set(list1).difference(list2)))

    for i in list1:
        if i not in list2:
            print(i)

list1 = [10, 15, 20, 25, 30, 35, 40]
list2 = [25, 40, 35] 
difflist(list1,list2)