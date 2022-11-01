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
	char mainstr[40] = "Wow";
	char substr[30] = " programme";
	char result;

	result = *_strstr(mainstr, substr);
	if (result)
	{
		printf("string is present");
		printf("\nRemaining is %d", result);
	}
	else
	{
		printf("string is absengt");
	}
	return (0);
}
