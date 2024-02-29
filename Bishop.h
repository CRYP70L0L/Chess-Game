#pragma once
#include "ChessBoard.h"

class Bishop {
private:
    string board[8][8];
    int xPosition;
    int yPosition;

public:
    Bishop(ChessBoard cb);
    void setPosition(int x, int y);
    bool isLegalMove(int toRow, int toCol);
};
