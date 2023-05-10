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
	size_t i;

	if (array == NULL)
		return (-1);

	while (array[step] < value && step < size)
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (i = prev; i <= fmin(step, size - 1); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
