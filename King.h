#pragma once
#include "ChessBoard.h"

class King {
private:
    string board[8][8];
    int xPos, yPos;
    //Tracks the position of the King
public:
    King(ChessBoard cb);

    void setPosition(int x, int y);
    bool isLegalMove(int toX, int toY);
};

