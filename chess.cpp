#include <iostream>
#include "chesscomponents.h"
using namespace std;

void printBoard(piece* board[8][8]);

int main()
{
    pawn pawnConst;
    piece* board[8][8];

    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++) {
            board[y][x] = nullptr;
        }
    }

    board[7][4] = new piece;
    board[7][4]->setAsPawn(pawnConst);

    printBoard(board);


    return 0;
}

void printBoard(piece* board[8][8])
{
    int k = 0;
    for (int i = 0; i < 8; i++) {
        cout << i << " ";
        for (int j = 0; j < 8; j++) {
            if(board[i][j] == nullptr) {
                if(k % 2)
                    cout << "   ";
                else
                    cout << "[ ]";
                k++;
            }
            else {
                if(k % 2)
                    cout << " " << board[i][j]->displayPiece() << " ";
                else
                    cout << "[" << board[i][j]->displayPiece() << "]";
                k++;
            }
        }
        k++;
        cout << endl;
    }
    cout << "  ";
    for (char i = 'A'; i < 'I'; i++) {
        cout << " " << i << " ";
    }
}
