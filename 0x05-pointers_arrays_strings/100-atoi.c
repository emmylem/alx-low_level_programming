#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: value
 */
int _atoi(char *s)
{
	char s[] = "210";

	int x = _atoi(*s);

	printf("The number is %d\n", x);
	return (0);
}
