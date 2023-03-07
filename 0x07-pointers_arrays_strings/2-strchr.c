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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	return (NULL);
}
