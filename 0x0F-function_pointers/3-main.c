#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints resulty
 * @argc: command line
 * @argv: 2d array of commandline args
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int (*ptr_func)(int, int), num1, num2;

	if (argc != 4)
		printf("Error\n"), exit(98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	ptr_func = get_op_func(argv[2]);
	if (!ptr_func)
	{
		printf("Error\n");
		exit(98);
	}

	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", ptr_func(num1, num2));
	return (0);
}
