#include "main.h"
/**
 * main - Entry
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int num;
	char la;

	for (num = 0; num <= 9; num++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
	return (0);
}
