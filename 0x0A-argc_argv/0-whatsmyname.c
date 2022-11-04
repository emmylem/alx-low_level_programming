#include "main.h"
#include <stdio.h>
/**
 * main - funtion to print its name
 * @argc: parameter to count
 * @argv: array of command
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
