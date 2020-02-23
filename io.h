#ifndef IO_H
# define IO_H

class board;

void io_init_terminal(void);
void io_reset_terminal(void);
void io_queue_message(const char *format, ...);
void io_display(board *b);

#endif