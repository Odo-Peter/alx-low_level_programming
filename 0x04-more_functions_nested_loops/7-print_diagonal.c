#include "main.h"
/**
 * print_diagonal - prints '\' out
 * @n: the params passed to the function
 * Return: 0 always
 */

void print_diagonal(int n)
{
	int i = 0, j;
	/*Computations and loops to check for n*/
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('\\');
			_putchar('\n');
			if (i != n - 1)
			{
				for (j = 0; j <= i; j++)
				{
				_putchar(' ');
				}
			}
			i++;
		}
	}
}
