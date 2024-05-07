def missingAndAdditional(list1,list2):

    print("Missing value in first List list1 : ", (set(list2).difference(list1)))
    print("Additional value in first List list1 : ", (set(list1).difference(list2)))

    print("Missing value in second List list2 : ", (set(list1).difference(list2)))
    print("Additional value in second List list2 : ", (set(list2).difference(list1)))

    p




list1 = [1, 2, 3, 4, 5, 6]
list2 = [4,5,6,7,8]
missingAndAdditional(list1,list2)