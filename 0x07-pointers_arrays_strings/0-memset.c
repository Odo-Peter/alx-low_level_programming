#include "main.h"
/**
 *_memset - fills memory with constant byte
 * @s: first params
 * @b: second params
 * @n: third params
 * Return: a pointer to the memory area
 */

char *_memset(void *s, int b, int n)
{
	unsigned char *p = s;
	/*for loop iteration*/
	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
