#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: first params
 * @accept: second params
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s && *accept && *s == *accept)
	{
		i++;
		s++;
		accept++;
	}
	return (i);
}
