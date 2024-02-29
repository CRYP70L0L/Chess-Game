

//THIS IS ORIGINAL

// Name: Alyaan Mir
// CIS-17A Fall 2023
// Professor Jessiah Ruiz
// Chess Program Final Project
// Walkthrough: https://youtu.be/MWRrS6OOQj0

#include <iostream>
#include<string>
#include "ChessBoard.h"
#include"Queen.h"
#include"King.h"
#include "Knight.h"
#include"Rook.h"
#include "Pawn.h"
#include "Bishop.h"
using namespace std;

int main()
{
        ChessBoard board;
        // this function displays the board in the initial placement of the chess board
        board.initialize();
        // Each piece is a different "object"
        Bishop bishop(board);
        Pawn pawn(board);
        Rook rook(board);
        Knight knight(board);
        Queen queen(board);
        King king(board);

        char sourceCol, destinationCol;
        int fromRow, toRow, sourceRow,destinationRow, fromCol, toCol;

        //This do statement asks the user which piece and where they want to move it
        char ans;
        do
        {
            cout << "Which piece would you like to move?. Enter the column(a - h)\n";
            cin >> sourceCol;
            fromCol = int(sourceCol) - 97;
            cout << "Enter the ROW number (1 - 8)\n";
            cin >> sourceRow;
            fromRow = sourceRow - 1;
            cout << "Where you want to move this piece? Enter the column(a - h)\n";
            cin >> destinationCol;
            toCol = int(destinationCol) - 97;
            cout << "Where you want to move this piece? Enter the Row number(1 - 8)\n";
            cin >> destinationRow;
            toRow = destinationRow - 1;
            
            pawn.setPosition(fromRow, fromCol);
            bishop.setPosition(fromRow, fromCol);
            rook.setPosition(fromRow, fromCol);
            knight.setPosition(fromRow, fromCol);
            queen.setPosition(fromRow, fromCol);
            king.setPosition(fromRow, fromCol);
            //These if else statements check if the the user chosen piece is allowed to move in the place the user chose

            if (bishop.isLegalMove(toRow, toCol))
            {
                cout << "Legal move!" << endl;
                // move the piece 
                board.movePiece(fromRow, fromCol, toRow, toCol);
                // print board
                board.initialize();
            }
            else if (pawn.isLegalMove(toRow, toCol))
            {
                cout << "Legal move!" << endl;
                board.movePiece(fromRow, fromCol, toRow, toCol);
                board.initialize();
            }
            else if (rook.isLegalMove(toRow, toCol))
            {
                cout << "Legal move!" << endl;
                board.movePiece(fromRow, fromCol, toRow, toCol);
                board.initialize();
            }
            else if (knight.isLegalMove(toRow, toCol))
            {
                cout << "Legal move!" << endl;
                board.movePiece(fromRow, fromCol, toRow, toCol);
                board.initialize();
            }
            else if (queen.isLegalMove(toRow, toCol))
            {
                cout << "Legal move!" << endl;
                board.movePiece(fromRow, fromCol, toRow, toCol);
                board.initialize();
            }
            else if (king.isLegalMove(toRow, toCol))
            {
                cout << "Legal move!" << endl;
                board.movePiece(fromRow, fromCol, toRow, toCol);
                board.initialize();
            }
            else 
            {
                cout << "You can't move your piece there!" << endl;
                board.initialize();
            }
            cout << "Do you want to keep playing? (Y/N)" << endl;
            cin >> ans;
        } while (ans != 'N' && ans != 'n');
  
    return 0;
}