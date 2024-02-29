#include "King.h"
King::King(ChessBoard cb) {
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            board[row][col] = cb.getPiece(row, col);
        }
    }
}

void King::setPosition(int x, int y) {
    xPos = x;
    yPos = y;
}

bool King::isLegalMove(int toX, int toY) {
    if (toX < 0 || toX > 7 || toY < 0 || toY > 7) {
        return false;
    }

    if (abs(xPos - toX) > 1 || abs(yPos - toY) > 1) {
        return false;
    }

    if (board[toX][toY] >= "A" && board[toX][toY] <= "Z") {
        return false;
    }

    return true;
}
