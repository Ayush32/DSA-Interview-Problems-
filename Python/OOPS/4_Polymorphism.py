class Shape:
    
    def calculateArea(self):
        print("THis method will give diffrent area of shapes")


class Cirlce(Shape):
    pi = 3.14
    def __init__(self,radius):
        self.radius = radius
        
    def calculateArea(self):
        print(f"Area of Circle : {pow(self.radius,2) * self.pi}")

class Rectanlge(Shape):
    
    def __init__(self,length,width) -> None:
        self.length = length
        self.width = width
    
    def calculateArea(self):
        print(f"Area of Rectangle : {self.width * self.length}")
        
cir = Cirlce(4)
Rect = Rectanlge(4,7)
cir.calculateArea()
Rect.calculateArea()
        