#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints sum
 * @argc: parameter
 * @argv: array of command
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, x, i, j, k;

	if (argc == 1)
		printf("0\n");

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s\n", "Error");
			return (1);
		}
	}

	for (k = 0; k < argc; k++)
	{
		x = atoi(argv[k]);
		result += x;
	}
	printf("%d\n", result);
	return (0);
}
