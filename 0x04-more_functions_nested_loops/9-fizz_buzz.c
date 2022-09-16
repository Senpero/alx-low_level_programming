#include <stdio.h>

/**
 * main - Program that prints the numbers from 1 to 100
 * but for multiples of three program prints Fizz instead,
 * and for the multiples of five program prints Buzz
 * For multiples of both three and five prints FizzBuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a == 100)
		{
			printf("Buzz\n");
		}
		else
		{
			if (a % 3 == 0 && a % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (a % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (a % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", a);
			}
		}
	}
	return (0);
}
