#include "main.h"
/**
 *_memset - fills memory with constant byte
 * @s: first params
 * @b: second params
 * @n: third params
 * Return: a pointer to the memory area
 */

void *_memset(void *s, int b, int n)
{
	unsigned char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return s;
}
