#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, c = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				c++;
			}
			b++;
		}
		a++;
	}
	return (c);
}

