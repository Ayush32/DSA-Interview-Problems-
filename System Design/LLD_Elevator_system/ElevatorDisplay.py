from .Direction import Direction

class ElevatorDisplay:
    
    def __init__(self,floor,direction : Direction):
        self.floor = floor
        self.direction = direction

    def setDisplay(self,floor,direction : Direction):
        self.floor = floor
        self.direction = direction

    def showDisplay(self,floor,direction : Direction):
        print(self.floor)
        print(self.direction)
