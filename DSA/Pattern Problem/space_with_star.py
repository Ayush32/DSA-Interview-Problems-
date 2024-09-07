def starPattern(n):
    k = 2 * n - 2
    for i in range(0,n):
        # print space
        for j in range(0,k):
            print(end = " ")
        k = k - 2
        for j in range(0,i + 1):
            print("* ", end = "")
        print("")    


n = int(input("Enter no of rows"))
starPattern(n)