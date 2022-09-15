#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int b;

	for (b = 0; b <= 14; b++)
	{
		_putchar((b / 10) + '0');
		_putchar((b % 10) + '0');
	}
	_putchar('\n');
}
