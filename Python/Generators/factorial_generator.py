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
    
    
# generate Factorial

def generate_factorial():
    n = 1
    factorial = 1
    while True:
        yield factorial
        n += 1
        factorial *= n

n = 10
factorial = generate_factorial()
res = []
for i in range(n):
    res.append(next(factorial))
print(res)