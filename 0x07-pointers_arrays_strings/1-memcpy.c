#include "main.h"
/**
 * _memcpy - funtion copies n byte from memory area to area dest
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *t = (char *dest);
	char *s = (char *src);

	for (i = 0; i < n; i++)
	{
		t[i] = s[i];
	}

	return (dest);
}
