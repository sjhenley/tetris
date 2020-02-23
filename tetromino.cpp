#include <time.h>
#include <stdlib.h>
#include <stdint.h>

#include "tetromino.h"
#include "dims.h"

void new_tetromino(tetromino_t *t) {
	srand(time(0));
	
	
	t->type = (tetromino_type)(rand() % 7);
	t->orientation = 0;
	
	switch (t->type){
		case type_i:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = true;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			break;
		
		case type_j:
			t->grid[0][0].filled = true;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			break;
		
		case type_l:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = true;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			break;
		
		case type_z:
			t->grid[0][0].filled = true;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
		
			break;
		
		case type_s:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = true;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			break;
		
		case type_o:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = true;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			break;
			
		case type_t:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			break;
	}
		
		
}

void rotate_i(tetromino_t *t)
{
	switch (t->orientation)
	{
		case 0:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = true;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = false;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = true;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = true;
			t->grid[3][3].filled = false;
			
			t->orientation = 1;
			break;
			
		case 1:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = false;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = true;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = true;
			t->grid[2][3].filled = true;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 2;
			break;
			
		case 2:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = true;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 3;
			break;
			
		case 3:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = true;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 0;
			break;
	}
}

void rotate_j(tetromino_t *t)
{
	switch (t->orientation)
	{
		case 0:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = true;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 1;
			break;
		
		case 1:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = true;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 2;
			break;
		
		case 2:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = true;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 3;
			break;
		
		case 3:
			t->grid[0][0].filled = true;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 0;
			break;
	}
}	

void rotate_l(tetromino_t *t)
{
	switch (t->orientation)
	{
		case 0:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = true;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 1;
			break;
		
		case 1:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = true;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 2;
			break;
		
		case 2:
			t->grid[0][0].filled = true;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 3;
			break;
		
		case 3:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = true;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 0;
			break;
	}
}

void rotate_z(tetromino_t *t)
{
	switch (t->orientation)
	{
		case 0:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = true;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
		
			t->orientation = 1;
			break;
		
		case 1:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = true;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 2;
			break;
		
		case 2:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = true;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
		
			t->orientation = 3;
			break;
		
		case 3:
			t->grid[0][0].filled = true;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 0;
			break;
	}
}

void rotate_s(tetromino_t *t)
{
	switch (t->orientation)
	{
		case 0:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = true;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 1;
			break;
		
		case 1:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = true;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 2;
			break;
		
		case 2:
			t->grid[0][0].filled = true;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 3;
			break;
		
		case 3:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = true;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 0;
			break;
	}
}

void rotate_t(tetromino_t *t)
{
	switch (t->orientation)
	{
		case 0:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = false;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 1;
			break;
		
		case 1:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = false;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 2;
			break;
		
		case 2:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = false;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = true;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 3;
			break;
		
		case 3:
			t->grid[0][0].filled = false;
			t->grid[0][1].filled = true;
			t->grid[0][2].filled = false;
			t->grid[0][3].filled = false;
			
			t->grid[1][0].filled = true;
			t->grid[1][1].filled = true;
			t->grid[1][2].filled = true;
			t->grid[1][3].filled = false;
			
			t->grid[2][0].filled = false;
			t->grid[2][1].filled = false;
			t->grid[2][2].filled = false;
			t->grid[2][3].filled = false;
			
			t->grid[3][0].filled = false;
			t->grid[3][1].filled = false;
			t->grid[3][2].filled = false;
			t->grid[3][3].filled = false;
			
			t->orientation = 0;
			break;
	}
}

void rotate_o(tetromino_t *t)
{
	/* no rotation necessary */
	
	if (t->orientation == 3) {
		t->orientation = 0;
	} else {
		t->orientation++;
	}
}

void rotate_right(tetromino_t *t) 
{
	switch (t->type)
	{
		case type_i:
			rotate_i(t);
			break;
		case type_j:
			rotate_j(t);
			break;
		case type_l:
			rotate_l(t);
			break;
		case type_s:
			rotate_s(t);
			break;
		case type_t:
			rotate_t(t);
			break;
		case type_z:
			rotate_z(t);
			break;
		case type_o:
			rotate_o(t);
			break;
	}
}

void rotate_left(tetromino_t *t) 
{
	switch (t->orientation)
	{
		case 0:
			t->orientation = 2;
			break;
		case 1: 
			t->orientation = 3;
			break;
		case 2:
			t->orientation = 0;
			break;
		case 3:
			t->orientation = 1;
			break;
	}
	
	rotate_right(t);
}
void del_tetromino(tetromino_t *t) {
	free(t);
	t = NULL;
}