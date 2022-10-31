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
	int len;
	char str1[] = "ABCDEFG";
	char str2[] = "ABC";

	len = _strspn(str1, str2);

	printf("length %d\n", len);

	return (0);
}

