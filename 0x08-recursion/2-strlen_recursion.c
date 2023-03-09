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
		len = len + 1;
		_strlen_recursion(s);
	}
	return (len);
}
