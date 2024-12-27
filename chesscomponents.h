#include <iostream>
using namespace std;



class pawn
{
public:
    char icon = 'P';
    void move(int &x, int &y)
    {
        y++;
        return;
    }
};

class piece
{
    int team; // 0=white 1=black
    bool isPawn, isRook, isBishop, isKnight, isQueen, isKing;

public:
    pawn* pawnAction;

    piece()
    {
        isPawn, isRook, isBishop, isKnight, isQueen, isKing = false;
        pawn* pawnAction = nullptr;
    }

    void setAsPawn(pawn pawnConstant)
    {
        isPawn = true;
        pawnAction = &pawnConstant;
    }

    char displayPiece()
    {
        if (isPawn) {
            return pawnAction->icon;
        }
    }



};
