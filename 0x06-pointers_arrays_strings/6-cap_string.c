#include "main.h"
/**
 * cap_string - capitalizes the words of a string
 * @s: the string params
 * Return: chars of string
 */

char *cap_string(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return;
	}
	int i = 1;
	/*some computations*/
	while (*s != '\0')
	{
		if (i || *s == ' ')
		{
			*s = *s + 32;
			i = 0;
		}
		s++;
	}
	return (s);
}
