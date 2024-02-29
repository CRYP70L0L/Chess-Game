#include "Queen.h"

Queen::Queen(ChessBoard cb) {
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            board[row][col] = cb.getPiece(row, col);
        }
    }
}

void Queen::setPosition(int x, int y) {
    xPosition = x;
    yPosition = y;
}

bool Queen::isLegalMove(int toX, int toY) {
    if (toX < 0 || toX > 7 || toY < 0 || toY > 7) {
        return false;
    }

    // Check if the move is a valid queen move
    if (abs(xPosition - toX) != abs(yPosition - toY) && xPosition != toX && yPosition != toY) {
        return false;
    }

    // Check if the destination is empty or contains an enemy piece
    if (board[toX][toY] != "  " && board[xPosition][yPosition] == board[toX][toY]) {
        return false;
    }

    // Check if there is a piece in the destination
    if (board[toX][toY] != "  ") {
        return false;
    }

    // Check if there are any pieces in the way
    int x = xPosition;
    int y = yPosition;
    int dx = (toX - xPosition) / abs(toX - xPosition);
    int dy = (toY - yPosition) / abs(toY - yPosition);

    while (x != toX && y != toY) {
        x += dx;
        y += dy;
        if (board[x][y] != "  ") {
            return false;
        }
    }
    return true;
}
  