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
		char s = c;
		if (_putchar(s) > 'Z')
		{
			return (1);
		} else if (_putchar(s) <= 'Z')
		{
			return (0);
		}
	}
	return (0);
}
