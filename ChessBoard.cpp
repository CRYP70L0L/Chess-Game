#include "ChessBoard.h"
#include<iostream>
#include <string>
#include <vector>
#include "Pawn.h"

ChessBoard::ChessBoard() {
    // Initial display of the chessboard
    string initialBoard[8][8] = {
        {"WR", "WN", "WB", "WQ", "WK", "WB", "WN", "WR"},
        {"WP", "WP", "WP", "WP", "WP", "WP", "WP", "WP"},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"BP", "BP", "BP", "BP", "BP", "BP", "BP", "BP"},
        {"BR", "BN", "BB", "BQ", "BK", "BB", "BN", "BR"}
    };

    // Copy the initial display to the chessboard
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            chessBoard[i][j] = initialBoard[i][j];
        }
    }
}

void ChessBoard::initialize() {
    cout << "    a    b    c    d    e    f    g    h\n";
    cout << "  ________________________________________\n";

    // Display the chessboard
    for (int i = 0; i < 8; i++) {
        cout << 1 + i << " |";
        for (int j = 0; j < 8; j++) {
            cout << " " << chessBoard[i][j] << " |";
        }
        cout << endl;
        cout << "  ________________________________________\n";
    }
    cout << "    a    b    c    d    e    f    g    h\n";
}