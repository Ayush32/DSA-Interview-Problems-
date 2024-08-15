def addBinary(a,b) -> str:
        # Convert Binary to Integer:
        a = int(a,2)
        b = int(b,2)
        # calcuate the sum
        sum = a + b
        # Finally, the sum is converted back to a binary string using the bin() function.       
        # The bin() function returns a string prefixed with '0b' to indicate that it is binary.By using [2:], 
        # the code slices off the '0b' prefix, returning only the binary digits.
        
        return bin(sum)[2:]
    
    
a = "11"
b = "1"
print(addBinary(a,b))
print(bin(3)[2:])