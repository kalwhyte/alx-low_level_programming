#include "main.h"

/**
 * print_alphabet - prints out alphabet in lower case
 *
 * Return: Always 0 if successful
 */

void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
