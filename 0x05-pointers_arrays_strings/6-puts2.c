#include "main.h"
/**
 * puts2 - prints a str without the first two letters
 * @str: the params of the function
 * Return: void
 */

void puts2(char *str)
{
	char *pt = str;
	/*The loop*/
	while (*pt)
	{
		_putchar(*pt);
		pt += 2;
	}
	_putchar('\n');
}
