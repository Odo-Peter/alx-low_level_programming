#include "main.h"
/**
 * _strcat - concats two strings
 * @dest: the first params
 * @src: the second params
 * Return: returns a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	/*int i = 0, j = 0;*/
	/*some loops goes here*/
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
