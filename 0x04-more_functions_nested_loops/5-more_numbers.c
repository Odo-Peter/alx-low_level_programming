#include "main.h"
/**
 * more_numbers - prints 10 lines of numbers
 * Return: 0 always
 */

void more_numbers(void)
{
	int i;
	char j;
	/*Loops to check and prints numbers*/
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('\x0D');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
