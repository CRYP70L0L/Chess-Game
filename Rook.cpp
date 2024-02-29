#include "Rook.h"
Rook::Rook(ChessBoard cb) {
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            board[row][col] = cb.getPiece(row, col);
        }
    }
}

void Rook::setPosition(int x, int y) {
    xPosition = x;
    yPosition = y;
}

bool Rook::isLegalMove(int toX, int toY) {
    if (xPosition < 0 || xPosition > 7 || yPosition < 0 || yPosition > 7 ||
        toX < 0 || toX > 7 || toY < 0 || toY > 7) {
        return false;
    }

    // Check if the destination is empty or contains an enemy piece
    if (board[toX][toY] != "  " && board[xPosition][yPosition] == board[toX][toY]) {
        return false;
    }

    // Check if the move is along a row or column
    if (xPosition != toX && yPosition != toY) {
        return false;
    }

    // Check if there are any pieces in between the current place and destination
    if (xPosition == toX) {
        int minY = min(yPosition, toY);
        int maxY = max(yPosition, toY);
        for (int y = minY + 1; y < maxY; y++) {
            if (board[xPosition][y] != "  ") {
                return false;
            }
        }
    }
    else {
        int minX = min(xPosition, toX);
        int maxX = max(xPosition, toX);
        for (int x = minX + 1; x < maxX; x++) {
            if (board[x][yPosition] != "  ") {
                return false;
            }
        }
    }
    return true;
}
