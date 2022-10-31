#include "main.h"
/**
 * *_strchr -  locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurance c
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
	}
	return (s);
}
