#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string params
 * Return: sting length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		s++;
		len++;
		_strlen_recursion(s);
	}
	return (len);
}
