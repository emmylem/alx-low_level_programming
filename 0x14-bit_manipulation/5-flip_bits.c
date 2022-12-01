#include "main.h"
#include <stdio.h>
/**
 * flip_bits - Number of bits needed to flip one room to another
 *
 * @n: long int
 *
 * @m: unsugned int
 *
 * Return: 1 else -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, index;

	index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			count++;
		}
		index >>= 1;
	}
	return (count);
}
