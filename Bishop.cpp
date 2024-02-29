#include "Bishop.h"
Bishop::Bishop(ChessBoard cb) {
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            board[row][col] = cb.getPiece(row, col);
        }
    }
}

void Bishop::setPosition(int x, int y) {
    xPosition = x;
    yPosition = y;
}

bool Bishop::isLegalMove(int toRow, int toCol) {
    // Check if the move is diagonal
    if (abs(xPosition - toRow) != abs(yPosition - toCol)) {
        return false;
    }

    // Check if the destination is empty
    if (board[toRow][toCol] != "  ") {
        return false;
    }

    // Check if there are any pieces in the way
    int x = xPosition;
    int y = yPosition;
    int dx = (toRow - xPosition) / abs(toRow - xPosition);
    int dy = (toCol - yPosition) / abs(toCol - yPosition);

    while (x != toRow && y != toCol) {
        x += dx;
        y += dy;
        if (board[x][y] != "  ") {
            return false;
        }
    }
    return true;
}
