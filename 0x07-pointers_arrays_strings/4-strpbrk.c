#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any set of byte
 * @s: first params
 * @accept: second params
 * Return: a pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s !- '\0')
	{
		char *a = accept;
		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (char *)s;
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
