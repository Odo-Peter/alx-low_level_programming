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
	char c = ',';
	/*The loops and computation*/
	if (n > m)
	{
		for (i = n; i > m; i--)
		{
			printf("%d%c ", i, c);
		}
		printf("%d\n", m);
	} else if (n == m)
	{
		printf("%d\n", n);
	}
	else {
		for (i = n; i < m; i++)
		{
			printf("%d%c ", i, c);
		}
		printf("%d", m);
		printf("\n");
	}
}
