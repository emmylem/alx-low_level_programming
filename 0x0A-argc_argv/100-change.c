#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints
 * @argc: -
 * @argv: -
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);

	}
	for (j = 0; j < 5 && x >= 0; j++)
	{
		while (x >= coins[j])
		{
			x -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
