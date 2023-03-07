#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 * @s: the string params
 * @c: the character to be located
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}
