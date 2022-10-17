#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 25; num < 35; num++)
	{
		putchar(num);
		if (num != 34)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
