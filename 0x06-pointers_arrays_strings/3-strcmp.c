#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first params
 * @s2: the second params
 * Return: 0 for success
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	if (*s1 == '\0')
		return (-1);
	return (1);
}
