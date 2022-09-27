#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @c: character
 * @s: string
 * Return: a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char chr;
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (chr == c)
		{
			_putchar(s[index]);
		}
		else
		{
			return (NULL);
		}
	}
	return (s);
}
