#include "main.h"
/**
 * print_numbers - prints from 0 to 9
 * Return: 0 always
 */

void print_numbers(void)
{
	char i;
	/*A for loop to traverse group of numbers*/
	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
