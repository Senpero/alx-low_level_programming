#include "main.h"

/**
 * _isupper - checks for uppercase character
 * returns 1 if positive else returns 0
 *
 * @c: type integer character
 * Return: 1 for success 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
