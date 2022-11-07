#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - prints length of str
 * @s: string
 * Return: length of str
 */
int _strlen(char *s)
{
	int counter = 0;

	if (!*s)
		return (0);
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}
/**
 * str_concat - concatenates two str
 * @s1: string
 * @s2: string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i;
	unsigned int j;
	int total = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	total += _strlen(s1) + strlen(s2);
	new = malloc(total * sizeof(char) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		new[i] = s2[j];
	}
	new[i] = '\0';
	return (new);
}

