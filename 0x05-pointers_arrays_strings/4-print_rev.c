#include "main.h"

/**
 * print_rev - a function that prints a string a string in reverse
 * followed by a new line
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		++i;
	}
	_putchar('\n');
}
