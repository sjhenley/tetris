
#include "board.h"



void init_queue(board *b)
{
	int i;
	tetromino_t t;
	
	for (i = 0 ; i < 5 ; i++) {
		new_tetromino(&t);
		b->queue[i] = t;
	}
}

void inc_queue(board *b)
{
	int i;
	tetromino_t t;
	
	for (i = 0; i < 4; i++) {
		b->queue[i] = b->queue[i + 1];
	}
	new_tetromino(&t);
	b->queue[4] = t;
}

void next_tetromino(board *b)
{
	b->current = &(b->queue[0]);
	inc_queue(b);
}

void init_board(board *b)
{
	uint8_t x, y;
	
	for (y = 0 ; y < BOARD_HEIGHT ; y++) {
		for (x = 0 ; x < BOARD_WIDTH ; x++) {
			b->map[y][x].filled = false;
		}
	}
	b->is_new = 1;
	b->run = 0;
}

