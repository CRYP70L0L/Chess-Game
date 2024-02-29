#pragma once
#include "ChessBoard.h"

class Rook {
private:
    string board[8][8];
    int xPosition;
    int yPosition;

public:
    Rook(ChessBoard cb);
    void setPosition(int x, int y);
    bool isLegalMove(int toX, int toY);
};

