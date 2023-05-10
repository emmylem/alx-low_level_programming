#include "search_algos.h"

/**
  * _binary_search_recursive - Searches recursively for a value in a sorted
  * array of ints
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  */
int _binary_search_recursive(int *array, int left, int right, int value)
{
	int node;

	if (left <= right)
	{
		node = left + (right - left) / 2;
		search(array, left, right);

		if (array[node] == value)
		{
			return (node);
		}
		else if (array[node] > value)
		{
			return (_binary_search_recursive(array, left, node - 1, value));
		}
		else
		{
			return (_binary_search_recursive(array, node + 1, right, value));
		}
	}
	return (-1);
}

/**
 * min - minimum value
 * @x: first num
 * @y: second num
 * Return: Integer
 */
int min(int x, int y)
{
	if (y > x)
	{
		return (x);
	}
	return (y);
}

/**
 * exponential_search - Searches value in Exponential search algo
 * @array: Array to search
 * @size: Size of Array
 * @value: Value to be searched
 *
 * Return: -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (; i < size && array[i] <= value; i = i * 2)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		return (_binary_search_recursive(array, i / 2, min(i, size - 1), value));
	}
	return (-1);
}
