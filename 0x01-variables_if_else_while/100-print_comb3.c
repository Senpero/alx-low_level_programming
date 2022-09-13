#include <stdio.h>

/**
 * main - Program prints all possible different combinations of
 * two digits numbers
 *
 * Return: Always 0
 */

int main(void)

{
	int a = '0', b;

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || b != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
