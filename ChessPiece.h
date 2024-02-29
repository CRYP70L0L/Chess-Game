//#pragma once
//#include<string>
//#include "ChessBoard.h"
//
////========================================================================================================================
//// This is being comment out because I was trying to complete the program with this approch but there were some errors in the 
//// program so I decided to not include this file.
////=========================================================================================================================
//
// //Create an abstract class for the pieces
//class Piece
//{
//public:
//    virtual bool isLegalMove(int x1, int y1, int x2, int y2) = 0;
//};
//class ChessPiece //: public Piece
//{
//private:
//    // Create a 2D array to represent the board
//    string board[8][8];
//
//public:
//    // Constructor to initialize the board
//    ChessPiece(ChessBoard cb)
//    {
//        // Copy the board from the ChessBoard object
//        for (int i = 0; i < 8; i++) {
//            for (int j = 0; j < 8; j++) {
//                board[i][j] = cb.getPiece(i, j);
//            }
//        }
//    }
//
//    // Method to check if the move is legal
//    virtual bool isLegalMove(int x1, int y1, int x2, int y2) = 0;
//};
////========================================================================================================================
//// This is being comment out because I was trying to complete the program with this approch but there were some errors in the 
//// program so I decided to not include this file.
////=========================================================================================================================
////
////========================================================================================================================
//// This is being comment out because I was trying to complete the program with this approch but there were some errors in the 
//// program so I decided to not include this file.
////=========================================================================================================================
//
//class ChessPiece 
//{
//private:
//    // Create a 2D array to represent the board
//    string board[8][8];
//
//public:
//    // Constructor to initialize the board
//    ChessPiece(ChessBoard cb)
//    {
//        // Copy the board from the ChessBoard object
//        for (int i = 0; i < 8; i++) {
//            for (int j = 0; j < 8; j++) {
//                board[i][j] = cb.getPiece(i, j);  // create a function getpiece(i,j)
//            }
//        }
//    }
//
//    // Method to check if a move is legal
//    virtual bool isLegalMove(int x1, int y1, int x2, int y2) = 0;
//
//};
//
////
////========================================================================================================================
//// This is being comment out because I was trying to complete the program with this approch but there were some errors in the 
//// program so I decided to not include this file.
////=========================================================================================================================
////
//// --------------------------------------------------------------------------------------------------------------
//// Abstract Class***************Abstract Class****************Abstract Class***************Abstract Class********
//// This Class serves as an Abstract Class ChessPiece is the parent class for all the actual chess pieces classes. 
//// This class keeps a reference to the board the piece is on (if any), stores the position where the piece is located,
//// and the color.
////- --------------------------------------------------------------------------------------------------------------
//enum Color 
//{ 
//	WHITE, 
//	BLACK 
//};
//
//class ChessPiece
//{
//protected:
//	ChessBoard board;
//	int row;
//	int column;
//	Color color;
//public:
//
//	//constructor
//	ChessPiece(ChessBoard _board, Color _color)
//	{
//		board = _board;
//		this->color = _color;
//		set(_board, _color);
//	}
//	 //the set function sets the attribute data.
//	void set(ChessBoard _board, Color _color)
//	{
//		board = _board;
//		color = _color;
//	}
//	
//	// Mutator Functions
//	void setRow(int r)
//	{
//		row = r;
//	}
//	void setColumn(int c)
//	{
//		column = c;
//	}
//	// Accessor Functions 
//	int getRow()
//	{
//		return row;
//	}
//	int getColumn()
//	{
//		return column;
//	}
//	Color getColor()
//	{
//		return color;
//	}
//
//	virtual vector<string> legalMoves() = 0;
//
//	virtual string toString()
//	{
//		return "";
//	}
//
//};
//
