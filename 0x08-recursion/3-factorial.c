#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: the number params
 * Return: an int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
	{
		int res;
		res = n * factorial(n - 1);
		return (res);
	}
}
