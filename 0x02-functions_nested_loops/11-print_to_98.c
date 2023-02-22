#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural number <= 98
 * @n: params passed to the function
 * Return: returns void
 */

void print_to_98(int n)
{
	int m = 98, i;
	/*The loops and computation*/
	if (n > m)
	{
		for (i = n; i > m; i--)
		{
			_putchar(i + '0');
			if (i != m)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(n + '0');
	} else if (n == m)
	{
		_putchar(n + '0');
	}
	else {
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		for (i = n; i < m; i++)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
