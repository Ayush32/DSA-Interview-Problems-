from abc import ABC, abstractmethod


# abstract class
class Car(ABC):
    def __init__(self,brand,price,model,color):
        self.brand = brand
        self.price = price
        self.model = model
        self.color = color
     
     # create abstract method   
    @abstractmethod
    def printDetails(self):
        pass
    
    def accelerate(self):
        print("speed Up.....")
        
    def breakApplied(self):
        print("Car Stopped.....")

class Hatchbak(Car):
    
    def printDetails(self):
        print(f"Brand : {self.brand}")
        print(f"Color : {self.color}")
        print(f"Price : {self.price}")
        print(f"Model : {self.model}")
        
    def isSunroof(self):
        print("Not Availble in this model")

class Sedan(Car):
    
    def printDetails(self):
        print(f"Brand : {self.brand}")
        print(f"Color : {self.color}")
        print(f"Price : {self.price}")
        print(f"Model : {self.model}")
    
    def isSunroof(self):
        print("yes sunroof is availble")
 

       
car1 = Hatchbak("maruti",600000,2021,"black")
car1.printDetails()

car1.accelerate()
car1.breakApplied()
car1.isSunroof()



car2 = Sedan("Honda",800000,2023,"red")
car2.printDetails()
car2.accelerate()
car2.breakApplied()
car2.isSunroof()

    
    
        
    
