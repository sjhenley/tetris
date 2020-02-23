#include <stdio.h>
#include <stdlib.h>

#include "board.h"
#include "io.h"


void usage(char *name)
{
	fprintf(stderr, "Usage: %s\n", name);
	exit(-1);
}

int main(int argc, char *argv[])
{
	board b;
	
	if (argc > 1) {
		usage(argv[0]);
	}
	
	io_init_terminal();
	init_board(&b);
	
	io_display(&b);
	
	while(!b.run) {
		
	}
	io_display(&b);
	
	io_reset_terminal();
	printf("You lasted %u seconds placing %u blocks \n", b.time, b.num_tetrominos);
	
	return 0;
}