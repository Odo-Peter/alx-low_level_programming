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
			printf("%d", i);
			if (i != m)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		printf("%d", n);
	} else if (n == m)
	{
		printf("%d", n);
	}
	else {
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
		for (i = n; i < m; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
