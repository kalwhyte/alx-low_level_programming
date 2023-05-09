#include "search_algos.h"

/**
 * exponential_search - Function that searches for a value in a sorted array
 *                      of integers using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: The first index where value is located,
 *         or -1 if value is not found or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	if (bound < size - 1)
		high = bound;
	else
		high = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array, low, high, value));
}

/**
 * binary_search - Function that searches for a value in a sorted subarray
 *                 of integers using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the subarray to search in.
 * @low: Lower bound index of the subarray.
 * @high: Upper bound index of the subarray.
 * @value: Value to search for in the subarray.
 *
 * Return: The index where value is located,
 *         or -1 if value is not found.
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_subarray(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_subarray - Function that prints the elements of a subarray.
 *
 * @array: Pointer to the first element of the array.
 * @low: Lower bound index of the subarray.
 * @high: Upper bound index of the subarray.
 */
void print_subarray(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array:");
	for (i = low; i <= high; i++)
	{
		printf(" %d", array[i]);
		if (i < high)
			printf(",");
	}
	printf("\n");
}
