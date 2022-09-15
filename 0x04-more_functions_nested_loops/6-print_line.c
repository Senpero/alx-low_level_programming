#include "main.h"

/**
 * print_line - function prints lines instead of numbers
 * @n: type integer variable
 *
 * Return: void
 */
void print_line(int n)
{
	int a;

	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
