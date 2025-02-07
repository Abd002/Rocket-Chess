#include <iostream>
#include <cstdint>
#include "bitboard_utility.hpp"

void setBit(uint64_t &bitboard, int square)
{
    bitboard |= (1ULL << square);
}

void clearBit(uint64_t &bitboard, int square)
{
    bitboard &= ~(1ULL << square);
}

bool getBit(uint64_t bitboard, int square)
{
    return bitboard & (1ULL << square);
}

uint64_t popLsb(uint64_t bitboard)
{
    return bitboard & (bitboard - 1);
}

void toggleBit(uint64_t &bitboard, int square)
{
    bitboard ^= (1ULL << square);
}
