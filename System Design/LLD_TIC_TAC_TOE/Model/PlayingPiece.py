from Model.PieceType import PieceType

class PlayingPiece:

    # making object of PieceType class
    pieceType : PieceType
    #  making constructor
    def __init__(self,pieceType : PieceType):
        self.pieceType = pieceType

    def __str__(self):
        return self.pieceType.value