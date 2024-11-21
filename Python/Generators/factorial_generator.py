def factorailGeneratror():
    n = 1
    factorial = 1
    
    while True:
        yield factorial
        n += 1
        factorial *= n
        
gen = factorailGeneratror()
for _ in range(5):
    print(next(gen))