#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for a value in a sorted
 *                             array of integers using binary search.
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: The starting index of the sub-array to search.
 * @right: The ending index of the sub-array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the sub-array being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t whyte = left;

	if (right < left)
		return (-1);

	while (whyte <= right)
	{
		printf("Searching in array: ");
		whyte = left;
		while (whyte < right)
		{
			printf("%d, ", array[whyte]);
			whyte++;
		}
		printf("%d\n", array[whyte]);

		whyte = left + (right - left) / 2;
		if (array[whyte] == value && (whyte == left || array[whyte - 1] != value))
			return (whyte);
		else if (array[whyte] >= value)
			right = whyte;
		else
			left = whyte + 1;
    }

    return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using advanced binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints the sub-array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return (advanced_binary_recursive(array, 0, size - 1, value));
}
