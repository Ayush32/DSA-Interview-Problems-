from abc import ABC, abstractmethod

class DriveStrategy(ABC):

    # making interface for strategies
    @abstractmethod
    def drive(self):
        pass

class NormalDriveStrategy(DriveStrategy):
    
    def drive(self):
        print("Normal Drive Strategy")

class SportsDriveStrategy(DriveStrategy):
    
    def drive(self):
        print("Sports Drive Strategy")
        
class Vehicle(DriveStrategy):
     # the drive strategy interface
    driveStrategy : DriveStrategy

    def __init__(self,driveStrategy : DriveStrategy):
            self.driveStrategy = driveStrategy

    def drive(self):
        self.driveStrategy.drive()


class GoodsVehicle(Vehicle):
    def __init__(self):
        super().__init__(NormalDriveStrategy())

class OffRoadVehicle(Vehicle):
    def __init__(self):
        super().__init__(SportsDriveStrategy())

class SportsVehicle(Vehicle):
    def __init__(self):
        super().__init__(SportsDriveStrategy())


off_road_vehicle = GoodsVehicle()
off_road_vehicle.drive() 