from math import pi
from abc import ABC,abstractmethod
class Shape():
    def calculate_Area(self):
        return "This method will give the area of diffrent shape"
        
class Rectangle(Shape):
    def __init__(self,length,width):
        super().__init__()
        self.length = length
        self.width = width
    
    # overridden method the implementation of Shape Class give area
    def calculate_Area(self):
        return f" Area of Rectangle is : {self.length * self.width}"

class Circle(Shape):
    def __init__(self,radius):
        super().__init__()
        self.radius = radius
    
    # overridden method the implementation of Shape Class give area
    def calculate_Area(self):
        return f" Area of Circle is : {self.radius * self.radius * pi}"
    
rect = Rectangle(5,6)
rect.calculate_Area()
print(rect.calculate_Area())
cir = Circle(20)
print(cir.calculate_Area())
    
    
        