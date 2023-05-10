#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *                        of integers using interpolation search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints the value every time it is compared in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, p;

	if (array == NULL || size == 0)
		return (-1);

	l = 0;
	h = size - 1;

	for (; l <= h && value >= array[l] && value <= array[h];)
	{
		if (l == h)
		{
			if (array[l] == value)
				return (l);
			return (-1);
		}

		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);

		if (array[p] == value)
			return (p);

		if (array[p] < value)
			l = p + 1;
		else
			h = p - 1;
	}

	printf("Value checked array[%lu] is out of range\n", p);
	return (-1);
}
