def modify_item(n):
    print(f" Before Upate : {n} : {id(n)}")
    n += 1 #This will not affect the integer outside the function
    print(f" After Update : {n} : {id(n)}")
    
    

n = 1
print(f" Before : {n} : {id(n)}")
modify_item(n)
print("Final Number : ",n)