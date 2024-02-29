#pragma once
#include<iostream>
using namespace std;

class ChessBoard {
private:
    //ChessPiece* chessBoard[8][8];
    string chessBoard[8][8];

public:
    // Constructor to initializes the board to an 8X8 array with all empty squares.
    ChessBoard();
    // This Function initializes the board to the standard chess opening state with indexing:
    void initialize();

    // Method to move a piece
    void movePiece(int fromRow, int fromCol, int toRow, int toCol) {
        chessBoard[toRow][toCol] = chessBoard[fromRow][fromCol];
        chessBoard[fromRow][fromCol] = "  ";
    }

    string getPiece(int x, int y) {
        return chessBoard[x][y];
    }
};


