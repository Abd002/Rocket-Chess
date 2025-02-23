#ifndef MOVE_HPP
#define MOVE_HPP

#include <cstdint>

#define NO_FLAG 0

/*
    This class Represent moves required informations in 16 bits
    (ffffttttttssssss) -> (flag-target-start)
*/
class Move
{
    uint16_t moveData;

public:
    Move(uint16_t moveData);
    Move(uint16_t startSquare, uint16_t targetSquare);
    Move(uint16_t startSquare, uint16_t targetSquare, uint16_t flag);

    int startSquare();
    int targetSquare();
    int moveFlag();

};

#endif