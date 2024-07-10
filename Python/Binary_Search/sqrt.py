def optimalSol(n):
    low = 1
    high = n

    ans = -1

    while low <= high:
        mid = low + (high - low) //2
        if mid * mid == n:
            return mid
        elif mid * mid <= n:
            ans = mid
            low = mid + 1
        else:
            high = mid - 1

    return ans

n = 8
print(optimalSol(n))