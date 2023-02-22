#include "main.h"
/**
 * jack_bauer - prints out every minute in a day
 * Return: no return value for a void function
 */

void jack_bauer(void)
{
	int i;
	/*The for loop goes below here*/
	for (i = 0; i < 1440; i++)
	{
		int h = i / 60;
		int m = 1 % 60;
		_putchar(h + '0');
		_putchar(':');
		_putchar(m + '0');
		_putchar('\n');
	}
}
