#include "main.h"

/**
 * swap_int - swaps the value of an integer
 * @a: pointer one
 * @b: pointer two
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
