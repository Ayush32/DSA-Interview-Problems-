# input : 0101100111. Count the number of zeroes to be removed to make 1 consecutive.


def removedZeros(num):
    first_occ = 0
    last_occ = 0
    
    for i in range(len(num)):
        if num[i] == '1':
            first_occ = i
            break

    # find last occ
    x = len(num) - 1
    while x >= 0:
        if num[x] == '1':
            last_occ = x
            break
        x = x - 1
    
    countZeros = 0    
    for i in range(first_occ,last_occ):
        if num[i] == '0':
            countZeros = countZeros + 1
    
    return countZeros
        
num = '0101100111'
print(removedZeros(num))