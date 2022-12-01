#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets value of bit to 0
 *
 * @n: long int
 *
 * @index: unsigned int
 *
 * Return: 1 else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count = 1 << index;

	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~count);
		return (1);
	}

	return (-1);
}
