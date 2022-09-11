#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting form 0
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		print("%d", num);

	print("\n");

	return (0);
}
