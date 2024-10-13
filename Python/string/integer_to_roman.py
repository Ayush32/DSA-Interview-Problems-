def integerToRoman(num):
    
    symbol = ["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]
    value = [1000,900,500,400,100,90,50,40,10,9,5,4,1]
    roman = ""
    while num > 0:
        for i in range(len(symbol)):
            if num >= value[i]:
                num = num - value[i]
                roman = roman + symbol[i]
                break
    
    return roman

num = 1994
print(integerToRoman(num))