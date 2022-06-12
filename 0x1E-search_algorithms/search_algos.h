#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_helper(int *array, int value,
						 size_t left_idx, size_t right_idx);
void print_subarray(int *array, size_t left_idx, size_t right_idx);

#endif
