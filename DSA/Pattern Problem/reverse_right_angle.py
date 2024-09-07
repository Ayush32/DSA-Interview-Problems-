def starPattern(n):
    for row in range(n + 1,0,-1):
        for col in range(0,row - 1):
            print("*", end = " ")
        print(" ")


n = int(input("Enter no of rows"))
starPattern(n)