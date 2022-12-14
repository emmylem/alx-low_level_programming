#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates array of integers
 * @min: int
 * @max: int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *bam;
	int count;

	if (min > max)
	{
		return (NULL);
	}

	bam = malloc(sizeof(int) * (max - min + 1));

	if (bam == NULL)
	{
		return (NULL);
	}
	count = 0;

	while (min <= max)
	{
		bam[count] = min;
		count++;
		min++;
	}
	return (bam);
}
