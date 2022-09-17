#include "main.h"

/**
 * print_line - function prints lines instead of numbers
 * @n: type integer variable for straight line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
