#include <stdio.h>
/**
 * main - Program prints all possible different combinations of
 * three digits numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= 9; a++)
	{
		for (b = '0'; b <= 9; b++)
		{
			for (c = '0'; c <= 9; c++)
			{
				if (b > a && c > b)
				{
					putchar(a, b, c);
					if (a != '7' || b != '8' || c != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
