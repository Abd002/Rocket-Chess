#ifndef PIECE_HPP
#define PIECE_HPP

#define EMPTY 0

#define PAWN 1
#define KNIGHT 2
#define BISHOP 3
#define ROOK 4
#define QUEEN 5
#define KING 6

#define WHITE 1
#define BLACK 2

class Piece
{
public:
    int type;
    int color;
};

#endif