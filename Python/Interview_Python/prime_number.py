def primeNumber(num):
    if num < 2:
        return False
    
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

# Generate a list of prime numbers from 1 to 100
primes = [n for n in range(1, 101) if primeNumber(n)]

# Check if each number in the list is prime (though they should all be prime already)
# prime_checks = [primeNumber(n) for n in primes]

print("Prime numbers:", primes)
# print("Prime checks:", prime_checks)
