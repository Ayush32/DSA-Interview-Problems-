import time

def time_Calculate(func):
    def wrapper(*args,**kwargs):
        start = time.time()
        result = func(*args,**kwargs)
        end = time.time()
        total_time = end - start
        print(f'function {func.__name__} took {total_time:.4f}')
        return result
    return wrapper


@time_Calculate
def sqaured_number(n):
    ans = []
    for i in range(n):
        ans.append(i*i)
    # return ans
@time_Calculate
def cub_number(n):
    ans = []
    for i in range(n):
        ans.append(i*i*i)
    # return ans

sqaured_number(10000000)
cub_number(10000000)