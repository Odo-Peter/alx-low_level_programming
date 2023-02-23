#include "main.h"
/**
 * print_diagonal - prints '\' out
 * @n: the params passed to the function
 * Return: 0 always
 */

void print_diagonal(int n)
{
	int i, j;
	/*Computations and loops to check for n*/
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
