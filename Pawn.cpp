#include "Pawn.h"

// Constructor to initialize the Pawn object with the current state of the chessboard
Pawn::Pawn(ChessBoard cb) {
    // Copy the chessboard state
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            board[row][col] = cb.getPiece(row, col);
        }
    }
}

// Set the position of the Pawn on the chessboard
void Pawn::setPosition(int x, int y) {
    xPosition = x;
    yPosition = y;
}

// Check if a move is legal for the Pawn
bool Pawn::isLegalMove(int toX, int toY) {
    // Check if the destination is out of the board boundaries
    if (toX < 0 || toX > 7 || toY < 0 || toY > 7) {
        cout << "Illegal move! Destination is out of bounds." << endl;
        return false;
    }

    // Check if the move is allowed as per the piece (forward one square)
    if (toX == xPosition + 1 && toY == yPosition) {
        return true;
    }

    // Disallow moving in the same row
    if (xPosition == toX) {
        cout << "Illegal move! Pawns can't move horizontally." << endl;
        return false;
    }

    // Disallow moving more than 1 square
    if (abs(toY - yPosition) > 1) {
        cout << "Illegal move! Pawns can only move one square at a time." << endl;
        return false;
    }

    // Print a message indicating a legal move
    cout << "Move is legal." << endl;

    return true;
}
