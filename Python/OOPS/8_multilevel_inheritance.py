# base case / superclass / parent class
class Vehicle():
    def vechile_info(self):
        print("vehicle is parent/base class")
        
# derived class / subclass / child class
class Car(Vehicle):
    def car_info(self):
        print("class Car is inherited from Vehicle base class")
        
class SportCar(Car):
    def sports_car_info(self):
        print("Sports car class is inheritaed from Car base class and car class inherited from Vehicle base class")
        
sport = SportCar()
sport.vechile_info()
sport.car_info()
sport.sports_car_info()