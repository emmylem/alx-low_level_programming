#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int djb;
	int x;

	djb = 5381;
	while ((x = *str++))
		djb = ((djb << 5) + djb) + x;

	return (djb);
}
