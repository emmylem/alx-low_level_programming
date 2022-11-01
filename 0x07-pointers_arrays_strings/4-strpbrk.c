#include "main.h"
/**
 * _strpbrk - locates the first occurance in string s
 * @s: string
 * @accept: contains byte
 * Return: pointer of string or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
