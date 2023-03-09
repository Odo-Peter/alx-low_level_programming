#include "main.h"
/**
 * _pow_recursion - returns the value of x to pow y
 * @x: the base params
 * @y: the power params
 * Return: an int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y > 1)
	{
		int res;

		res = x *  _pow_recursion(x, y - 1);
		return (res);
	}
	return (0);
}
