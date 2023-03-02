#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the first params
 * @src: the second params
 * @n: the third params
 * Return: a pointer to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*the loops*/
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		*(dest + n) = '\0';
	}
	return (dest);
}
