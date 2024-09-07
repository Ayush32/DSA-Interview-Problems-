import pytest
def starPattern(n):
    for row in range(1,n + 1):
        for col in range(1,row + 1):
            print(row, end = ' ')
        print(" ")    

print(" ")
def starPattern(n):
    for row in range(1,n + 1):
        for col in range(1,row + 1):
            print(col, end = ' ')
        print(" ")    

def starPattern(n):
    for row in range(1,n + 1):
        for col in range(1,row + 1):
            print(n, end = ' ')
        print(" ")    

def starPattern(n):
    count = 1
    for row in range(1,n + 1):
        for col in range(1,row + 1):
            print(count, end = ' ')
        count = count + 2
        print(" ")    


n = int(input("Enter no of rows"))
starPattern(n)