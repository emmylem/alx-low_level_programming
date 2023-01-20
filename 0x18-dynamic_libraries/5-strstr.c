#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates string
 * @haystack: string
 * @needle: string
 * Return: a pointer to byte
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
			if (*(haystack + point) != needle[point])
				break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
