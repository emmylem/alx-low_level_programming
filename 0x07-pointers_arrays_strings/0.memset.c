#include "main.h"
/**
 * _memst - fills memory with constant byte
 * @dest: memory space to be filled
 * @src: byte to fill space
 * @n: number of space to fill
 *
 * Return: pointer to memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *src;
	}
	return (dest);
}
