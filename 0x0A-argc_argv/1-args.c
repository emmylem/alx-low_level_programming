#include <stdio.h>
#include "main.h"
/**
 * main - prints the number
 * @argc: the parameter
 * @argv: array of command
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
