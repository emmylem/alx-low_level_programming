#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonal matrix
 * @a: the matrix
 * @size: the size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, total1 = 0, total2 = 0;

	for (b = 0; b < size; b++)
	{
		total1 += a[(size + 1) * b];
		total2 += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", total1, total2);
}
