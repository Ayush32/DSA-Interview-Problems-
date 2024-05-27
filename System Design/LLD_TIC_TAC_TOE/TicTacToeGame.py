from collections import deque
from Model.Board import Board
from typing import List, Tuple
from Model.PlayingPiece import PlayingPiece
from Model.PlayingPieceO import PlayingPieceO
from Model.PlayingPieceX import PlayingPieceX
from Model.PieceType import PieceType
from Model.Player import Player

class TicTacToeGame:

    def __init__(self,size = 3):
        self.players = deque()
        self.gameBoard = Board(size)
    
    def initializeGame(self):

        # create 2 players
        crossPiece = PlayingPieceX()
        player1 = Player("Player1", crossPiece)

        noughtsPiece = PlayingPieceO()
        player2 = Player("Player2",noughtsPiece)

        self.players.append(player1)
        self.players.append(player2)

        # initialize the game board

        self.gameBoard = Board(size = 3)

    def startGame(self) -> str:
        noWinner = True

        while(noWinner):
            #   //take out the player whose turn is and also put the player in the list back
            playerTurn = self.players.popleft()
            # get the free space from the board
            self.gameBoard.printBoard()
            freeSpaces = self.gameBoard.getFreeCells()
            if not freeSpaces:
                noWinner = False
                continue
            
            # READ THE USER INPUT
            print(f"Player: {playerTurn.name}, Enter row,column: ")
            input_row, input_column = map(int, input().split(','))

            # PLACE THE TIE
            pieceAddedSuccessfully = self.gameBoard.addPiece(input_row,input_column,playerTurn.playingPiece)
            if not pieceAddedSuccessfully:
                #  //player can not insert the piece into this cell, player has to choose another cell
                print("Incorrect Position chosen, try again!")
                self.players.appendleft(playerTurn)
                continue
            
            self.players.append(playerTurn)

            winner = self.isThereWinner(input_row, input_column, playerTurn.playingPiece.pieceType)

            if winner:
                return playerTurn.name
        
        return "tie"
    

    def isThereWinner(self,row,column,pieceType : PieceType):
        

        # need to check in row
        if all(self.gameBoard.board[row][c] and self.gameBoard.board[row][c].pieceType == pieceType for c in range(self.gameBoard.size)):
            return True
        # Check column
        if all(self.gameBoard.board[r][column] and self.gameBoard.board[r][column].pieceType == pieceType for r in range(self.gameBoard.size)):
            return True
        # Check diagonal (top-left to bottom-right)
        if row == column and all(self.gameBoard.board[i][i] and self.gameBoard.board[i][i].pieceType == pieceType for i in range(self.gameBoard.size)):
            return True
        # Check anti-diagonal (top-right to bottom-left)
        if row + column == self.gameBoard.size - 1 and all(self.gameBoard.board[i][self.gameBoard.size - 1 - i] and self.gameBoard.board[i][self.gameBoard.size - 1 - i].pieceType == pieceType for i in range(self.gameBoard.size)):
            return True
        return False
        


                          