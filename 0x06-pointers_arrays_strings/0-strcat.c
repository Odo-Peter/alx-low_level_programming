#include "main.h"
/**
 * _strcat - concats two strings
 * @dest: the first params
 * @src: the second params
 * Return: returns a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
