#include "main.h"
/**
 * times_table - prints all values that multiples of nine
 * Return: no return value in a void function
 */

void times_table(void)
{
	int i = 0, j, k;
	/*The loops goes in here*/
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = j * i;
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar(i + '0');
		_putchar('\n');
		i++;
	}
}
