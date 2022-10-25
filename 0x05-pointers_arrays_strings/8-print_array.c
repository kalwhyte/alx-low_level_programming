#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints n array of integers
 * @a: prints out character
 * @n: array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
