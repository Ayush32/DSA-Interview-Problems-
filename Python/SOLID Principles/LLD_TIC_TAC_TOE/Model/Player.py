from .PlayingPiece import PlayingPiece

class Player:
    
    playingPiece : PlayingPiece
    def __init__(self,name,playingPiece : PlayingPiece):
        self.name = name
        self.playingPiece = playingPiece

    def getName(self):
        return self.name
    def setName(self,name):
        self.name = name
    
    def getPlayingPiece(self) -> PlayingPiece:
        return self.playingPiece

    def setPlayingPiece(self,playingPiece : PlayingPiece):
        self.playingPiece = playingPiece
    
          
    