#ifndef TETROMINO_H
# define TETROMINO_H

#include <dims.h>

enum __attribute__ ((__packed__)) tetromino_type {
	type_i,
	type_j,
	type_l;
	type_z;
	type_s;
	type_o;
	type_t;
}
	

typedef struct block {
	bool filled
} block_t

typedef struct tetromino {
	pair_t pos;
	tetromino_type type;
	block grid[4][4];
	uint8_t orientation;
} tetromino_t

void new_tetromino(tetromino_t *t);
void rotate_right(tetromino_t *t);
void rotate_left(tetromino_t *t);
void del_tetromino(tetromino_t *t);



#endif