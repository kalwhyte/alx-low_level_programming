#include "main.h"

/**
 * print_alphabet_x10 - prints out 10 times the alphabet
 *
 * Return: Always 0 if successful
 */

void print_alphabet_x10(void)
{
	int lower;
	int num;

	num = 0;

	while (num < 10)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		num++;
		_putchar('\n');
	}
}
