#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination to be copied to
 * @src: source to copy from
 * @n: amount of bytes to be copied
 * Return: a pointer to the dest
 */

char *_memcpy(void *dest, void *src, int n)
{
	int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (cdest);
}
