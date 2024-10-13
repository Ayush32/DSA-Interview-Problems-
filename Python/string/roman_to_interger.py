def romanToInterger(s):
    
    mapping = {
        'I' : 1,
      'V' : 5,
      'X' : 10,
      'L' : 50,
      'C' : 100,
      'D' : 500,
      'M' : 1000,
    }
    integer = 0 
    for i in range(len(s)-1):
        if mapping[s[i]] < mapping[s[i + 1]]:
            integer -= mapping[s[i]]
        else:
            integer += mapping[s[i]]
        # integer += mapping[s[i]]
        
    
    return integer + mapping[s[-1]] 

s = "LVIII"
print(romanToInterger(s))