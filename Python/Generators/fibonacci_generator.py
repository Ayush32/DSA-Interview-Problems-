def fibonacci_number():
    # a - first fibonacci number
    # b - second fibonacci number
    a,b= 0,1
    while True:
        yield a
        a,b = b, a + b
        
        
fibo = fibonacci_number()
ans = []
for _ in range(10):
    ans.append(next(fibo))

print(ans)
# 0,1,1,2,3,5,8,13,21


def generate_fibonacci():
    a = 0
    b = 1
    while True:
        yield a
        a,b = b,a + b
        

n = 100
fibo = generate_fibonacci()
ans = []
for i in range(n):
    ans.append(next(fibo))

print(ans)
        