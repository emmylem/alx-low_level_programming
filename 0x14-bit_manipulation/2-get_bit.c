#include "main.h"
#include <stdio.h>
/**
 * get_bit - Get value of a bit at a given index
 *
 * @n: lont int'
 *
 *
 * @index:unsigned int
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int count = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	count <<= index;

	if (count & n)
		return (1);
	else
		return (0);
}
