#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
}
