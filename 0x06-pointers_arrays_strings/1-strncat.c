#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the first params
 * @src: the second params
 * @n: the third params
 * Return: a char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;

	/* find the offset of the null terminator in dest */
	while (dest[i] != '\0')
	{
		i++;
	}
	/* copy the bytes from the src string there */
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	/* set the null terminator */
	dest[i] = '\0';
	/* return the pointer to the destination array */
	return dest;
}
