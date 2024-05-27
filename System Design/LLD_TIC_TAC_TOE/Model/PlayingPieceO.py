from .PlayingPiece import PlayingPiece
from .PieceType import PieceType

class PlayingPieceO(PlayingPiece):

    def __init__(self):
        # pass pieceType of O using super
        super().__init__(PieceType.O)