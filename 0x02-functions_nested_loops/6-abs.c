#include "main.h"
/**
 * _abs - prints the absolute values
 * @c: takes an int as input params for the function
 * Return: 0 always
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
		_putchar(c);
	}
	return (0);
}
