#include "main.h"
/**
 * print_numbers - prints from 0 to 9
 * Return: 0 always
 */

void print_numbers(void)
{
	int i;
	/*A for loop to traverse group of numbers*/
	for (i = 0; i < 127; i++)
	{
		if (i >= 48 && i <= 57)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
