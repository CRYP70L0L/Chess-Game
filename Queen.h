#pragma once
#include "ChessBoard.h"

class Queen {
private:
    string board[8][8];
    int xPosition;
    int yPosition;

public:
    Queen(ChessBoard cb);
    void setPosition(int x, int y);
    bool isLegalMove(int toX, int toY);
};

