'''
Python Generators Explained
In Python, a generator is a special type of function that returns an iterator, allowing you to generate a sequence of values on-the-fly, 
without storing them all in memory at once. This makes generators particularly useful for handling large datasets, infinite sequences, 
or computationally expensive operations.

Key Characteristics:
Lazy Evaluation: Generators evaluate their expressions only when the iterator (e.g., next() or a for loop) requests the next value.
Stateful: Generators maintain their internal state between iterations, allowing them to remember where they left off and resume from there.
Return values: Generators use the yield statement to produce values, which are returned to the caller.

Generator Function: Define a function that contains one or more yield statements. This function becomes a generator.
Generator Expression: Use parentheses () instead of square brackets [] or curly braces {} to create a generator expression.
Example:
'''

def infiniteSequence():
    num = 0
    while True:
        yield num
        num += 1

ans = infiniteSequence()        
for _ in range(5):
    print(next(ans))