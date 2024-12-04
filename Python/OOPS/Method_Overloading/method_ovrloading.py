# not work

# class Geometry:
    
#     def area(self,radius):
#         print(f"Circle : {radius * radius * 3.14}")
    
#     def area(self,l = 0,b = 0):
#         print(f"Circle : {l * b}")
        
    
# obj = Geometry()
# obj.area(4)
# obj.area(4,6)


class Geometry:
    
    def area(self,a =0,b = 0,c = 0):
        if b == 0 and c == 0:
            print(f"Circle : {a * a * 3.14}")
        elif c == 0:
            print(f"Area of : {a * b} ")
        else:
            print(f"Circle : {a * b * c}")
    
        
    
obj = Geometry()
obj.area(4)
obj.area(4,6)
obj.area(4,6,8)
