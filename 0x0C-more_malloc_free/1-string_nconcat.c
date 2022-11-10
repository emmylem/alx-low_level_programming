#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: char pointer
 * @s2: char pointer
 * @n: unsigned int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int for1, for2, x, y;
	char *bam;

	for1 = 0;
	for2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	while (s1[for1] != '\0')
		for1++;
	while (s2[for2] != '\0')
		for2++;
	if (n > for2)
	{
		n = for2;
	}
	bam = malloc(sizeof(char) * (for1 + (n + 1)));

	if (bam == NULL)
	{
		return (NULL);

	}
	for (x = 0; x < for1; x++)
	{
		bam[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		bam[x] = s2[y];
		x++;
	}
	bam[x] = '\0';
	return (bam);
}
