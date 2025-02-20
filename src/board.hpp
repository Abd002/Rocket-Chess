#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <string>
#include "piece.hpp"

class Board
{
private:
    void loadPosFromFEN(std::string fen);

public:
    Piece pieces[8][8];
    Board(std::string fen);
    void printBoard();
};

#endif