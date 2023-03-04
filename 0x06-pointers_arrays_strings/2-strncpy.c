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
	int i = 0;
	/*the loops*/
	while (*src)
	{
		while (i < n)
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
		src++;
	}
	*dest = '\0';
	return (dest);
}
