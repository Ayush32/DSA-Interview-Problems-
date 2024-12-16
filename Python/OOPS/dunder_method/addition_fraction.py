class Fraction:
    
    def __init__(self,n,d):
        self.num = n
        self.den = d
        
    def __add__(self,other):
        temp_num = self.num * other.den + self.den * other.num
        temp_den = self.den * other.den
        
        return f"{temp_num}/{temp_den}"
    def __sub__(self,other):
        temp_num = self.num * other.den - self.den * other.num
        temp_den = self.den * other.den    
        return f"{temp_num}/{temp_den}"

    def __mul__(self,other):
        temp_num = (self.num * other.den) *(self.den * other.num)
        temp_den = self.den * other.den    
        return f"{temp_num}/{temp_den}"

obj1 = Fraction(5,8)
obj2 = Fraction(6,9)
print(obj1 + obj2)
print(obj1 - obj2)
print(obj1 * obj2)    
         