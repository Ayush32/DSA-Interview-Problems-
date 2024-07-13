'''
more than one derived class can inherit from single base class
'''
class Vehicle():
    def vechile_info(self):
        print("vehicle is parent/base class")
        
# derived class / subclass / child class
class Car(Vehicle):
    def car_info(self):
        print("class Car is inherited from Vehicle base class")
        
class Truck(Vehicle):
    def truck_info(self):
        print("class Truck is inherited from Vehicle base class")
        
obj1 = Car()
obj1.vechile_info()
obj1.car_info()

obj2 = Truck()
obj2.vechile_info()
obj2.truck_info()
