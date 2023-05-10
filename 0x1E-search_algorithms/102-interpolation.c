#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  * of ints with interpolation search.
  * @array: A pointer array to search
  * @size: Size the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1
  *
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t hi = (size - 1);
	size_t post;

	if (array == NULL)
		return (-1);

	for (l = 0, hi = size - 1; hi >= l;)
	{
		/* Position probe */
		post = l + (((double)(hi - l) /
	(array[hi] - array[l])) * (value - array[l]));
		if (post < size)
			printf("Value checked array[%ld] = [%d]\n", post, array[post]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", post);
			return (-1);
		}

		/* Position Value */
		if (array[post] == value)
			return (post);
		if (array[post] < value)
			l = post + 1;
		else
			hi = post - 1;
	}

	return (-1);
}
