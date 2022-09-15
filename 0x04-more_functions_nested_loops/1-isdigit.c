#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * returns 1 if positive else returns 0
 *
 * @c: type integer variable
 * Return: 1 if successful 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
