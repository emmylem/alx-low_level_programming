#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else if (num == 60)
		{
			return (0);
		}
	putchar('\n');
	return (0);
	}
}
