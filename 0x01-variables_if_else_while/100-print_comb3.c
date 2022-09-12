#include <stdio.h>



/**
 * main - Program prints all possible different combinations of
 * two digits numbers
 *
 * Return: Always 0
 */

int main(void)

{	
        int m = '0', n;

	while (m <= '9')
	{
			n = '0';
			while (n <= '9')
			{
					if (n > m)
		 			{
						putchar(m);
						putchar(n);																		 if (m != '8' || n != '9')
						{
							putchar(',');
				                        putchar(' ');																	 }
					}
					n++;
			}
			m++;
	}
	putchar('\n');
	return (0);
}
