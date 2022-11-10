#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory to int
 * @b: to be allocated to
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *bam;

	bam = malloc(b);
	if (bam == NULL)
	{
		exit(98);
	}
	return (bam);
}
