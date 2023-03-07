#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination to be copied to
 * @src: source to copy from
 * @n: amount of bytes to be copied
 * Return: a pointer to the dest
 */

char *_memcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*dest[i] = *src[i];
	}
	return (dest);
}
