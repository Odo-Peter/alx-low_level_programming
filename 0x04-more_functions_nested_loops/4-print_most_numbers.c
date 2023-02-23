#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 neglecting 2 and 4
 * Return: 0 always on completion
 */

void print_most_numbers(void)
{
	int i;
	/*A for loop traverses through the ascii digits*/
	for (i = 0; i <= 127; i++)
	{
		if (i >= 48 && i <= 57)
		{
			if (i != 50 && i != 52)
			{
				_putchar(i + '0');
			}
		}
	}
	_putchar('\n');
}
