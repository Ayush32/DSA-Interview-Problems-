

def digitWords(index):
    digits = ["one","two","three","four","five","six","seven","eight","nine"]
    
    return digits[index]

def convertintToString(n):
    
    s = str(n)
    result = ""
    for i in s:
        result += digitWords(int(i) - 1)
        
    return result 

n = 567
print(convertintToString(n))
    

# print(ord("1") - 0)