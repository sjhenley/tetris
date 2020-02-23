#ifndef BOARD_H
# define BOARD_H

#include <stdint.h>

#include "tetromino.h"

#define BOARD_HEIGHT 20
#define BOARD_WIDTH 10

class board {
	public:
	board() : map{false}, num_tetrominos(0), current(0), queue{}, time(0), is_new(0), run(0) {}
	block map[BOARD_HEIGHT][BOARD_WIDTH];
	uint32_t num_tetrominos;
	tetromino_t *current;
	tetromino_t queue[5];
	uint32_t time;
	uint32_t is_new;
	uint32_t run;
};

void init_queue(board *b);
void inc_queue(board *b);
void next_tetromino(board *b);
void init_board(board *b);

#endif