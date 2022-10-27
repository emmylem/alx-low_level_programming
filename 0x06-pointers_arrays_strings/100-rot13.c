#include "main.h"
#include <stdio.h>
/**
 * _rot13 - encrypts a string
 * @src: string
 * Return: string
 */
char *rot13(char *src)
{
	char *word = src[50];
	int key = 13;

	for (int n = 0, len = strlen(word); n < len; n++)
	{
		int letter = word(n);

		char cipher = letter + key;

	if ((letter - 'a') + key > 26)
		{
			key = (letter - 'a') + key % 26;
			cipher = 'a' + key;
		}
		printf("%c", cipher);
		key = 13;
	}
	printf("\n");
	return (0);
}
