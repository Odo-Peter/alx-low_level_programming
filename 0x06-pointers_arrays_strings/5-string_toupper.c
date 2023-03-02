#include "main.h"
/**
 * string_toupper - converts a string to upper case
 * @s: the string params
 * Return: a string
 */

char *string_toupper(char *s)
{
	char *p;
	/*some loops*/
	for (p = s; *p != '\0'; p++)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 32;
		}
	}
	return (p);
}
