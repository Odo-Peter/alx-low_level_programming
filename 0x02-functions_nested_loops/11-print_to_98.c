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
		for (i = n - 1; i > m; i--)
		{
			printf("%d \, \' ' %d\n", n, i);
		}
	}
}
