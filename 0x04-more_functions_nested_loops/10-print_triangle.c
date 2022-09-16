#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: size of triangle integer variable
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = (size - 1); b > a; b--)
		{
			_putchar(' ');
		}
		for (c = 0; c < a; c++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
