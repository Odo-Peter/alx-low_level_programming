#include "main.h"
/**
 * print_square - print '#' as squares
 * @size: the params passed to the function
 * Return: 0 always
 */

void print_square(int size)
{
	int i = 0, j;
	/*computations and loops to check for size*/
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
