#ifndef BOARD_DATA_INCLUDED
#define BOARD_DATA_INCLUDED

#include <cstdint>

const int BOARD_SQUARE_COUNT = 81;
const int BOARD_RANK_COUNT = 9;
const int BOARD_FILE_COUNT = 9;
const int BOARD_TRI_ROW_COUNT = 3;
const int TRI_ROW_SQUARE_COUNT = 27;

const int SQUARE_NONE = 81;

const int DIGIT_COUNT = 9;

typedef uint32_t BitBoard32;

const BitBoard32 TRI_ROW_MASK = (1UL << TRI_ROW_SQUARE_COUNT) - 1;

extern const BitBoard32 SQUARE_CONFLICT_MASKS[BOARD_SQUARE_COUNT][BOARD_TRI_ROW_COUNT];

#endif // #ifndef BOARD_DATA_INCLUDED
