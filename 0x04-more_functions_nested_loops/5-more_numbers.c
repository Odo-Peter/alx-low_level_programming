#include "main.h"
/**
 * more_numbers - prints 10 lines of numbers
 * Return: 0 always
 */

void more_numbers(void)
{
	int i = 0, j;
	/*Loops to check and prints numbers*/
	while (i < 10)
	{
		for (j = 000; j <= 016; j++)
		{
			_putchar(j + '0');
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
