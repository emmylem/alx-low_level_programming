#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: value
 */
int _atoi(char *s)
{
	char str[] = "210";

	int x = _atoi(str);

	int sign = 1;

	while (!('0' <= *s && *s <= '9') && *s != '0')
	{
		if (*s == '-')
			sign *= -1;
		if (*s == '+')
			sign *= +1;
		s++;
	}

	printf("The number is %d\n", x);
	return (0);
}
