#include <iostream>

using namespace std;

enum ChessPieces
{
    Rook,
    Bishop,
    Knight,
    King,
    Queen,
    Pawn
};

int main() {
    const int CHESS_BOARD_SIDE = 8;

    ChessPieces chessBoard[CHESS_BOARD_SIDE][CHESS_BOARD_SIDE] = {};

    chessBoard[3][4] = Pawn;
    cout << chessBoard[3][4] << endl;
    cout << chessBoard[4][3] << endl;

    return 0;
}