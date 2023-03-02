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
	while (*dest)
	{
		dest++;
	}
	int n = 0;
	/*assigning a value to the n variable*/
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest);
}
