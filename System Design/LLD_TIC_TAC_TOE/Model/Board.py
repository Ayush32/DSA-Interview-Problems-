from .PieceType import PieceType
from .PlayingPiece import PlayingPiece
from .PlayingPieceO import PlayingPieceO
from .PlayingPieceX import PlayingPieceX
from  typing import List,Tuple
class Board:
    
    def __init__(self,size):
        self.size = size
        self.board = [[None for _ in range(size)] for _ in range(size)]

    def addPiece(self,row,column,playingPiece : PlayingPiece):
        if self.board[row][column] is not None:
            return False
        self.board[row][column] = playingPiece
        return True

    def getFreeCells(self) -> List[Tuple[int, int]]:
        free_cells = []
        for i in range(self.size):
            for j in range(self.size):
                if self.board[i][j] is None:
                    free_cells.append((i, j))
        return free_cells

    def printBoard(self):
        for row in self.board:
            print(' | '.join([str(piece) if piece else '   ' for piece in row]))
            print('-' * (self.size * 2 - 1))