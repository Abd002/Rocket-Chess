#include "move.hpp"

Move::Move(uint16_t moveData) : moveData(moveData) {}
Move::Move(uint16_t startSquare, uint16_t targetSquare) : Move(startSquare | (targetSquare << 6)) {}
Move::Move(uint16_t startSquare, uint16_t targetSquare, uint16_t flag) : Move(startSquare | (targetSquare << 6) | (flag << 12)) {}

int Move::startSquare()
{
    return (moveData >> 0) & (0b111111);
}
int Move::targetSquare()
{
    return (moveData >> 6) & (0b111111);
}
int Move::moveFlag()
{
    return (moveData >> 12) & (0b1111);
}