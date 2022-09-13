#include <stdio.h>

/**
 * main - Program prints all possible different combinations of
 * two two digits numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;
	int c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= 9; c++)
			{
				for (d = '0'; d <= 9; d++)
				{
					if (a != c || b != d)
					{
						if (c > b || d > a)
						{
							putchar(a);
							putchar(b);
							putchar(' ');
							putchar(c);
							putchar(d);
							if (a != '9' || b != '8' || c != '9' || d != '9')
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
