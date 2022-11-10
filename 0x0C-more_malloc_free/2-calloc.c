#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory to array
 * @nmemb: no of elements
 * @size: bytes of element
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strarray;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	strarray = malloc(nmemb * size);

	if (strarray == NULL)
	{
		return (NULL);
	}
	count = 0;

	for (count = 0; count < (nmemb * size); count++)
	{
		strarray[count] = 0;
	}
	return (strarray);
}
