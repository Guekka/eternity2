//
// Created by appad on 10/02/2024.
//

#ifndef ETERNITY2_PIECE_H
#define ETERNITY2_PIECE_H

#include <bitset>
#include <iostream>
#include <vector>

using PIECE = unsigned long long;
using PIECE_PART = unsigned short;
const PIECE TRUE = 0b1111111111111111;
const PIECE UP_MASK = 0b1111111111111111000000000000000000000000000000000000000000000000;
const PIECE RIGHT_MASK = 0b0000000000000000111111111111111100000000000000000000000000000000;
const PIECE DOWN_MASK = 0b0000000000000000000000000000000011111111111111110000000000000000;
const PIECE LEFT_MASK = 0b0000000000000000000000000000000000000000000000001111111111111111;
const PIECE_PART WALL = 0b1111111111111111;
const PIECE EMPTY = 0b0000000000000000;
const PIECE FULLWALL = UP_MASK | RIGHT_MASK | DOWN_MASK | LEFT_MASK;

PIECE_PART get_piece_part(PIECE piece, PIECE mask);

std::vector<std::string> piece_to_string(PIECE piece);

PIECE make_piece(PIECE_PART top, PIECE_PART right, PIECE_PART down, PIECE_PART left);

PIECE rotate_piece_right(PIECE piece, size_t n);

PIECE rotate_piece_left(PIECE piece, size_t n);

void log_piece(PIECE piece, const std::string &description);

#endif //ETERNITY2_PIECE_H
