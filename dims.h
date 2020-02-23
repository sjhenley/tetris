#ifndef DIMS_H
# define DIMS_H

#define X_POS 1
#define Y_POS 0

typedef enum dim {
	dim_x,
	dim_y,
	num_dims
} dim_t

typedef int16_t pair_t[num_dims];

#endif