#include "main.h"
/**
 * _strchr - locates a char in a string
 * @s: the string params
 * @c: the character to be located
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	while (*s == '\0')
	{
		if (*s == c)
		{
			c = *s;
		}
		else
		{
			return (NULL);

		}
		s++;
	}
	return (s);
}
