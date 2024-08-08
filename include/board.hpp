#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>

#define BOARD_SIZE 3
typedef enum {EMPTY = -1, X = 0, O = 1} cell_t;

cell_t tictactoe_board[BOARD_SIZE][BOARD_SIZE] = {
    {EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY},
};

void print_board(void);

#endif // BOARD_HPP