#include "main.h"
/**
 * _islower - prints out checks for chars that lowercase
 *@c: is the parameter that is passed to the function
 * Return: 1 for a lowercase char and 0 for otherwise
 */

int _islower(int c)
{
	for (c = 65; c <= 122; c++)
	{
		c += '0';
		if (_putchar(c) > '`')
		{
			return (1);
		} else if (_putchar(c) <= 'Z')
		{
			return (0);
		}
	}
	return (0);
}
