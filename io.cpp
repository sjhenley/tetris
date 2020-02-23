#include <ncurses.h>
#include <stdlib.h>

#include "board.h"
#include "tetromino.h"

#define WINDOW_HEIGHT 25
#define WINDOW_WIDTH 15

/*
	Manages IO of program
	Adapted from source code by Jeremy Sheaffer,
	Iowa State University
	Department of Computer Science
*/

typedef struct io_message {
	char msg[WINDOW_WIDTH];
	struct io_message *next;
} io_message_t;

static io_message_t *io_head, *io_tail;

void io_init_terminal(void)
{
	initscr();
	raw();
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
}

void io_reset_terminal(void)
{
	endwin();
	
	while (io_head) {
		io_tail = io_head;
		io_head = io_head->next;
		free(io_tail);
	}
	io_tail = NULL;
}

void io_queue_message(const char *format, ...)
{
	io_message_t *tmp;
	va_list ap;
	if (!(tmp = (io_message_t *) malloc(sizeof (*tmp)))) {
		perror("malloc");
		exit(1);
	}
	
	tmp->next = NULL;
	
	va_start(ap, format);
	
	vsnprintf(tmp->msg, sizeof(tmp->msg), format, ap);
	
	va_end(ap);
	
	if(!io_head) {
		io_head = io_tail = tmp;
	} else {
		io_tail->next = tmp;
		io_tail = tmp;
	}
}

static void io_print_message_queue(uint32_t y, uint32_t x)
{
	while (io_head) {
		io_tail = io_head;
		mvprintw(y, x, "%-80s", io_head->msg);
		io_head = io_head->next;
		if (io_head) {
			mvprintw(y, x + WINDOW_WIDTH - 6, "%10s", "--more-- ");
			refresh();
			getch();
		}
		free(io_tail);
	}
	io_tail = NULL;
}

void io_display(board *b)
{
	int y, x;
	
	for (y = 0 ; y < BOARD_HEIGHT ; y++) {
		for (x = 0 ; x < BOARD_WIDTH ; x++) {
			if (y == 0 || y == BOARD_HEIGHT - 1 ||
				x == 0 || x == BOARD_WIDTH - 1)
			{
				mvaddch(y, x, '@');
			} else if (b->map[y][x].filled)
				mvaddch(y, x, '#');
		}
	}
	
	io_print_message_queue(0, 0);
	
	refresh();
}