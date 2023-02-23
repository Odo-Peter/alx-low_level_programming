#include "main.h"
/**
 * print_line - prints '_' to the terminal
 * @n: params for the function
 * Return: 0 always
 */

void print_line(int n)
{
	int i;
	/*Some computations and loop to check for n*/
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
