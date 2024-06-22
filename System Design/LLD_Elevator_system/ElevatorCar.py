from .ElevatorDisplay import ElevatorDisplay
from .Direction import Direction
from .ElevatorState import ElevatorState
from .ElevatorDoor import ElevatorDoor

class ElevatorCar:
    def __init__(self,id = 1):
        self.id = id  # Initialize as None or assign an ID if needed
        self.display = ElevatorDisplay()
        # self.internalButtons = InternalButtons()
        self.elevatorState = ElevatorState.IDLE
        self.currentFloor = 0
        self.elevatorDirection = Direction.UP
        self.elevatorDoor = ElevatorDoor()

    def showDisplay(self):
        self.display.showDisplay()

    # def pressButton(self,destination):

    def setDisplay(self):
        self.display.pressButton(self.currentFloor,self.elevatorDirection)

    def moveElevator(self, direction : Direction,destinationFloor):
        startFloor = self.currentFloor
    # for up lift lower floor - top floor
        if direction == Direction.UP:
            for i in range(startFloor,self,destinationFloor):
                self.currentFloor = i
                self.showDisplay()
                if i == destinationFloor:
                    return True

        # lift is start from top floor to lower floor
        if direction == Direction.DOWN:
            for i in range(startFloor, destinationFloor - 1, -1):
                self.currentFloor = i
                self.showDisplay()
                if i == destinationFloor:
                    return True

        return False  

    
