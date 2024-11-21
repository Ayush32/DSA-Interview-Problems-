def fibonacci_number():
    a,b= 0,1
    while True:
        yield a
        a,b = b , a + b
        
        
fibo = fibonacci_number()
ans = []
for _ in range(10):
    ans.append(next(fibo))

print(ans)