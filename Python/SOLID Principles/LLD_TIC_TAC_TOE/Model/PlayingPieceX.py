from .PlayingPiece import PlayingPiece
from .PieceType import PieceType

class PlayingPieceX(PlayingPiece):

    def __init__(self):
        # pass pieceType of X using super
        super().__init__(PieceType.X)