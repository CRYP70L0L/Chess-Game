#pragma once
#include"ChessBoard.h"
class Knight
{
private:
    // Create a 2D array to represent the board
    string board[8][8];
    // Keep track of knight's current position
    int xPosition;
    int yPosition;

public:
    // Constructor to initialize the board
    Knight(ChessBoard cb);
    
    void setPosition(int x, int y)
    {
        xPosition = x;
        yPosition = y;
    }
  
            // Function to check if a move is legal
    bool isLegalMove(int x2, int y2) 
    {
        // Check if the destination is within the board
        if (x2 < 0 || x2 > 7 || y2 < 0 || y2 > 7) 
        {
            return false;
        }
        // Check if the destination is empty or contains an enemy piece
        if (board[x2][y2] != "  " && board[x2][y2] == board[xPosition][yPosition]) 
        {
            return false;
        }

        // Check if the move is a valid knight move
        if (abs(x2 - xPosition) == 2 && abs(y2 - yPosition) == 1) 
        {
            return true;
        }
        if (abs(x2 - xPosition) == 1 && abs(y2 - yPosition) == 2) 
        {
            return true;
        }

        return false;
    }

    
};

