#pragma once
#include "ChessBoard.h"

class Pawn {
private:
    string board[8][8];
    int xPosition;
    int yPosition;

public:
    Pawn(ChessBoard cb);
    void setPosition(int x, int y);
    bool isLegalMove(int toX, int toY);
};
