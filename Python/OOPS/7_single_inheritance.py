# single inheritance

# base case / superclass / parent class
class Vehicle():
    def vechile_info(self):
        print("vehicle is parent/base class")
        
# derived class / subclass / child class
class Car(Vehicle):
    def car_info(self):
        print("class Car is inherited from Vehicle base class")
        
car = Car()
car.vechile_info()
car.car_info()


