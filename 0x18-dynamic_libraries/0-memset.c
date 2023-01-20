#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: memory space to be filled
 * @b: byte to fill with
 * @n: number of space to fill
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
