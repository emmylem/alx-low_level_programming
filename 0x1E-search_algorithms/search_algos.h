#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void search(int *array, int one, int two);
int binary_search_recursive(int *array, int left, int right, int value);
int min(int x, int y);
int _binary_search_recursive(int *array, int left, int right, int value);
int advanced_binary(int *array, size_t size, int value);
int b_search_recursive(int *array, int left, int right, int value);
void p_search(int *array, int one, int two);

#endif
