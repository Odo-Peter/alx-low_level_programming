#include "main.h"
/**
 *_memset - fills memory with constant byte
 * @s: first params
 * @b: second params
 * @n: third params
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;

	while (n--)
	{
		*p++ = (unsigned)b;
	}
	return s;
}
