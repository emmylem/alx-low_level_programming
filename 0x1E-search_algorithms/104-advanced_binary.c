#include "search_algos.h"

/**
 * p_search - Prints array
 * @array: Array to print
 * @one: left child array
 * @two: right child array
 * Return: void
 */

void p_search(int *array, int one, int two)
{
	int i = 0;

	printf("Searching in array: ");

	while (two >= one)
	{
		if (i > 0)
		{
			printf(", ");
		}
		i = one++;
		printf("%d", array[i++]);
	}
	printf("\n");
}
/**
  * b_search_recursive - Searches recursively for a value in a sorted
  * array of ints
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  */
int b_search_recursive(int *array, int left, int right, int value)
{
	int node;

	if (left <= right)
	{
		node = left + (right - left) / 2;
		p_search(array, left, right);

		if (array[node] == value)
		{
			return (node);
		}
		else if (array[node] > value)
		{
			return (b_search_recursive(array, left, node - 1, value));
		}
		else
		{
			return (b_search_recursive(array, node + 1, right, value));
		}
	}
	return (-1);
}

/**
  * advanced_binary - Searches for a value in a sorted array
  * of ints using binary search.
  * @array: A pointer of array
  * @size: Size of array
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
