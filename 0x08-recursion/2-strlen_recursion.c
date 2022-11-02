#include "main.h"
/**
 * _strlen_recursion - prints length of string
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int len;

	for (len = 0; len < 10; len++)
	{
		if (*s)
		{
			len += _strlen_recursion(s + 1);
		}
	}
}
