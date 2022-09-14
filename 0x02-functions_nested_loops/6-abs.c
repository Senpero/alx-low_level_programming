#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @d: type int number
 *
 * Return: absolute value of @d
 */
int _abs(int d)
{
	if (d < 0)
	{
		return (d * -1);
	}
	else
	{
		return (d);
	}
}
