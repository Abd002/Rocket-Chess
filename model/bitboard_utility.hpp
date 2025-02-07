#include <iostream>
#include <cstdint>

void setBit(uint64_t &bitboard, int square);
void clearBit(uint64_t &bitboard, int square);
bool getBit(uint64_t bitboard, int square);
uint64_t popLsb(uint64_t bitboard);
void toggleBit(uint64_t &bitboard, int square);
