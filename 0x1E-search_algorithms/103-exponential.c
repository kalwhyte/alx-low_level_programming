#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t whyte;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (whyte = left; whyte < right; whyte++)
			printf("%d, ", array[whyte]);
		printf("%d\n", array[whyte]);

		whyte = left + (right - left) / 2;
		if (array[whyte] == value)
			return (whyte);
		if (array[whyte] < value)
			left = whyte + 1;
		else
			right = whyte - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 *                 of integers using exponential search.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t whyte = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (whyte = 1; whyte < size && array[whyte] <= value; whyte = whyte * 2)
			printf("Value checked array[%ld] = [%d]\n", whyte, array[whyte]);
	}

	right = whyte < size ? whyte : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", whyte / 2, right);
	return (_binary_search(array, whyte / 2, right, value));
}
