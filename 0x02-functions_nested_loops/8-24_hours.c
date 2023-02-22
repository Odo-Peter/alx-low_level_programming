#include "main.h"
/**
 * jack_bauer - prints out every minute in a day
 * Return: no return value for a void function
 */

void jack_bauer(void)
{
	int i;
	int j;
	/*The for loop goes below here*/
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
