#include "search_algos.h"

/**
 * jump_search - Function that searches for a value in a sorted array
 *               of integers using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: The first index where value is located,
 *         or -1 if value is not found or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == fmin(step + 1, size))
			return (-1);
	}

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
		return (prev);

	return (-1);
}
