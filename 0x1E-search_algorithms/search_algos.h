#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int search_binary(int *array, int value, size_t low, size_t high);
size_t min(size_t i, size_t j);
/* listint_t *jump_list(listint_t *list, size_t size, int value); */

#endif
