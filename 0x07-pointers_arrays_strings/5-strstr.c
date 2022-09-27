#include "main.h"
#include <stdio.h>

/**
 * _strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		if (haystack[j] != needle[j - i])
		{
			break;
		}
	}
	if (needle[j - i] == '\0')
	{
		return (haystack + i);
	}
	return (0);
}
