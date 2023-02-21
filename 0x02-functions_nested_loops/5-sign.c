#include "main.h"
/**
 * print_sign - prints out the sign based on the condition of the params
 * @n: the ints value passed as params to the function
 * Return: 0 aways
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
